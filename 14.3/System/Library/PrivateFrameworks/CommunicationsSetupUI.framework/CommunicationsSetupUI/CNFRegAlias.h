@class NSString, IMAccount, NSDate;

@interface CNFRegAlias : NSObject

@property (copy, nonatomic) NSString *alias;
@property (retain, nonatomic) IMAccount *account;
@property (nonatomic) long long givenAliasType;
@property (copy, nonatomic) NSString *deviceAliasIdentifier;
@property (nonatomic, getter=isSelectedDeviceAlias) BOOL selectedDeviceAlias;
@property (nonatomic) BOOL isTemporary;
@property (copy, nonatomic) NSDate *_expirationDate;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, retain, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (BOOL)validate;
- (long long)localizedCaseInsensitiveCompare:(id)a0;
- (void)setDisplayName:(id)a0;
- (unsigned long long)hash;
- (long long)validationStatus;
- (id)description;
- (long long)type;
- (BOOL)isEqual:(id)a0;
- (id)identifier;
- (id)initWithAccount:(id)a0 alias:(id)a1;
- (id)initWithAlias:(id)a0 type:(long long)a1 selected:(BOOL)a2 deviceAliasIdentifier:(id)a3;
- (BOOL)isDeviceAlias;
- (BOOL)isTemporaryPhoneNumberAlias;
- (BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
- (long long)validationErrorReason;
- (BOOL)isLocalPhoneNumberAlias;

@end
