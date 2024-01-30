@class NSString, NSManagedObjectID;

@interface _DPBSSFPRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *privateValue;
@property (copy, nonatomic) NSString *tableVersion;
@property (nonatomic) long long segmentIndex;
@property (nonatomic) BOOL verificationMode;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)entityName;
- (id)initWithCoder:(id)a0;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)jsonString;
- (id)initWithKey:(id)a0 privateValue:(id)a1 tableVersion:(id)a2 segmentIndex:(long long)a3 verificationMode:(BOOL)a4 creationDate:(double)a5 submitted:(BOOL)a6 objectId:(id)a7;
- (BOOL)isEqualToBSSFPRecord:(id)a0;

@end
