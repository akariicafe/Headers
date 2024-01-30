@class NSString, NSManagedObjectID;

@interface _DPPTRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *privateValue;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)a0;

- (id)entityName;
- (void)encodeWithCoder:(id)a0;
- (id)jsonString;
- (BOOL)copyToManagedObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithKey:(id)a0 privateValue:(id)a1 creationDate:(double)a2 submitted:(BOOL)a3 objectId:(id)a4;
- (BOOL)isEqualToPTRecord:(id)a0;

@end
