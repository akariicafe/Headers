@class NSString;

@interface SUInstallPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientName;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long skipsAllowed;
@property (readonly, nonatomic) BOOL autoUpdateEnabled;
@property (readonly, nonatomic) BOOL useDarkBoot;

- (void)_setType:(unsigned long long)a0;
- (void)_setAutoUpdateEnabled:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_setClientName:(id)a0;
- (unsigned long long)hash;
- (id)initWithInstallPolicyType:(unsigned long long)a0;
- (void)_setDarkBoolEnabled:(BOOL)a0;

@end
