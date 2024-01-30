@class NSUUID, NSString, VMHandle;

@interface VMAccount : NSObject <NSCopying, NSMutableCopying, VMSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *accountDescription;
@property (copy, nonatomic) NSString *abbreviatedAccountDescription;
@property (retain, nonatomic) VMHandle *handle;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (nonatomic, getter=isProvisioned) BOOL provisioned;
@property (copy, nonatomic) NSString *serviceName;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAccount:(id)a0;
- (id)init;
- (id)archivedDataWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)copyPropertiesWithZone:(struct _NSZone { } *)a0 toAccount:(id)a1;

@end
