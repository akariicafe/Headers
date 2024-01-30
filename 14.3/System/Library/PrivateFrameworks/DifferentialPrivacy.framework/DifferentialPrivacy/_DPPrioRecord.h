@class NSString, NSDictionary, NSData, NSManagedObjectID;

@interface _DPPrioRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSData *share1;
@property (copy, nonatomic) NSData *share2;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)a0;

- (id)entityName;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (id)jsonString;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)initWithKey:(id)a0 share1:(id)a1 share2:(id)a2 metadata:(id)a3 creationDate:(double)a4 submitted:(BOOL)a5 objectId:(id)a6;
- (BOOL)isEqualToPrioRecord:(id)a0;

@end
