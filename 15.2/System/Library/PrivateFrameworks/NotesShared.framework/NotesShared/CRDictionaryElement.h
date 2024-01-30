@class CRVectorTimestamp;
@protocol CRDataType;

@interface CRDictionaryElement : NSObject

@property (retain, nonatomic) id<CRDataType> value;
@property (retain, nonatomic) CRVectorTimestamp *timestamp;

+ (id)temporaryElementWithValue:(id)a0;

- (id)initWithValue:(id)a0 timestamp:(id)a1;
- (void)mergeWith:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;
- (unsigned long long)hash;

@end
