@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableGlobalMetadatum : BCMutableCloudData <BCGlobalMetadatum>

@property (copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) long long editGeneration;
@property (readonly, nonatomic) long long syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) id<BCCloudDataPrivacyDelegate> privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithKey:(id)a0;
- (id)zoneName;
- (id)initWithRecord:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)recordType;
- (id)configuredRecordFromAttributes;
- (id)initWithCloudData:(id)a0;

@end
