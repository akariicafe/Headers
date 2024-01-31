@class NSUUID, NSMutableDictionary, NSArray, NSString, CKDistributedTimestampStateVector;

@interface CKMultiValueRegister : NSObject <CKPropertiesDescription>

@property (readonly, nonatomic) NSMutableDictionary *timestampToContents;
@property (readonly, nonatomic) unsigned long long nextClockValue;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *vector;
@property (copy, nonatomic) NSArray *contents;
@property (readonly, nonatomic) BOOL isConsumedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeholderIdentifier;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)redactedDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 vector:(id)a1;
- (id)initWithIdentifier:(id)a0 vector:(id)a1 contents:(id)a2 error:(id *)a3;
- (BOOL)merge:(id)a0 error:(id *)a1;
- (unsigned long long)replaceVectorStateForPresentOrTombstonedTimestamps:(unsigned char)a0;
- (id)siteIdentifier;

@end
