@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying>

@property (class, readonly, nonatomic) unsigned long long preferredAttestationStyle;

@property (copy, nonatomic) NSString *clientCertLabel;
@property (copy, nonatomic) NSString *intermediateCertLabel;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long purpose;
@property (nonatomic) BOOL regenerateKeys;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL authenticationFallbackVisible;
@property (nonatomic) BOOL displayAuthenticationReason;
@property (copy, nonatomic) NSString *prompt;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_compareString:(id)a0 withString:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)optionsDictionary;
- (id)initWithOptionsDictionary:(id)a0;

@end
