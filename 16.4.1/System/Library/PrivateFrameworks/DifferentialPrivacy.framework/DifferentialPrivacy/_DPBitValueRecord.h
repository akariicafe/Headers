@class NSString, NSManagedObjectID;

@interface _DPBitValueRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (nonatomic) short clearBitValue;
@property (copy, nonatomic) NSString *privateBitValueStr;
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
- (id)initWithKey:(id)a0 clearBitValue:(short)a1 privateBitValueStr:(id)a2 creationDate:(double)a3 submitted:(BOOL)a4 objectId:(id)a5;
- (BOOL)isEqualToBitValueRecord:(id)a0;

@end
