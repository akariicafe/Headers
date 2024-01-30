@class NSString, NSMutableDictionary;
@protocol CalMigrationAccount;

@interface CalChangeFilteringMigrationAccount : NSObject <CalMigrationAccount> {
    NSString *_accountTypeIdentifier;
    NSString *_accountIdentifier;
}

@property (readonly, nonatomic) NSMutableDictionary *modifiedPropertyValues;
@property (readonly, nonatomic) id<CalMigrationAccount> backingAccount;
@property (retain, nonatomic) NSString *parentAccountIdentifier;
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
- (void).cxx_destruct;
- (id)initWithBackingAccount:(id)a0;
- (id)accountPropertyForKey:(id)a0;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (id)initWithAccountIdentifier:(id)a0 accountTypeIdentifier:(id)a1;
- (void)setAuthenticationTypeParent;
- (void)setAuthenticationTypeNone;

@end
