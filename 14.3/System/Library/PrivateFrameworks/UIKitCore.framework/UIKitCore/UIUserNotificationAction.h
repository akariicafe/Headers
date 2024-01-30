@class NSString, NSDictionary;

@interface UIUserNotificationAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long behavior;
@property (copy, nonatomic) NSDictionary *parameters;
@property (nonatomic) unsigned long long activationMode;
@property (nonatomic, getter=isAuthenticationRequired) BOOL authenticationRequired;
@property (nonatomic, getter=isDestructive) BOOL destructive;
@property (readonly, nonatomic) NSString *activationModeString;
@property (readonly, nonatomic) NSString *behaviorString;

- (id)initWithIdentifier:(id)a0 title:(id)a1 behavior:(unsigned long long)a2 parameters:(id)a3 activationMode:(unsigned long long)a4 isAuthenticationRequired:(BOOL)a5 isDestructive:(BOOL)a6;
- (id)init;
- (void).cxx_destruct;
- (id)validatedAction;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
