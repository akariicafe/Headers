@class NSString, NSManagedObjectID;

@interface _DPPrivacyBudgetRecord : NSObject <_DPStorageMOConversion, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double creationDate;
@property (nonatomic) double lastUpdate;
@property (nonatomic) long long balance;
@property (nonatomic) BOOL submitted;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)a0;

- (id)entityName;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPrivacyBudgetRecord:(id)a0;
- (BOOL)copyToManagedObject:(id)a0;
- (id)description;
- (id)initWithKey:(id)a0 creationDate:(double)a1 lastUpdate:(double)a2 balance:(long long)a3 objectId:(id)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
