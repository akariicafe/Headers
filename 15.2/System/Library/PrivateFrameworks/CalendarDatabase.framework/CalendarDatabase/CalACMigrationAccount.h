@class NSString, ACAccount;

@interface CalACMigrationAccount : NSObject <CalMigrationAccount>

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) BOOL dirty;
@property (retain, nonatomic) NSString *accountDescription;
@property (nonatomic) BOOL enabledForCalendarsDataClass;
@property (nonatomic) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifier;
- (id)accountTypeIdentifier;
- (id)parentAccountIdentifier;
- (void).cxx_destruct;
- (id)accountPropertyForKey:(id)a0;
- (id)initWithACAccount:(id)a0;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (void)setAuthenticationTypeParent;
- (void)setAuthenticationTypeNone;

@end
