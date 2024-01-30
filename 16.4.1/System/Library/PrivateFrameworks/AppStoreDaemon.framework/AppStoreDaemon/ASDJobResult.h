@class NSString, NSError, NSNumber;

@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSNumber *persistentID;
@property (readonly, nonatomic) long long status;

+ (id)resultWithInvalidActivity:(long long)a0 bundleID:(id)a1;
+ (id)resultWithValidActivity:(long long)a0 bundleID:(id)a1;
+ (id)resultWithPersistentID:(id)a0 bundleID:(id)a1 status:(long long)a2 error:(id)a3;
+ (id)resultWithRestrictedActivity:(long long)a0 bundleID:(id)a1;
+ (id)resultWithExistingActivity:(long long)a0 bundleID:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
