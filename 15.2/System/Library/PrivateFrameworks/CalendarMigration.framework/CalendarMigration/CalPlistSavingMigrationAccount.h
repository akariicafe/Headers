@class NSString, NSMutableDictionary;
@protocol CalMigrationAccount;

@interface CalPlistSavingMigrationAccount : NSObject <CalMigrationAccount> {
    NSString *_accountTypeIdentifier;
}

@property (readonly, nonatomic) id<CalMigrationAccount> backingAccount;
@property (readonly, nonatomic) NSMutableDictionary *savedProperties;
@property (readonly, nonatomic) NSMutableDictionary *modifiedProperties;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *parentAccountIdentifier;
@property (readonly, nonatomic) BOOL dirty;
@property (retain, nonatomic) NSString *accountDescription;
@property (nonatomic) BOOL enabledForCalendarsDataClass;
@property (nonatomic) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)save;
- (id)accountTypeIdentifier;
- (void).cxx_destruct;
- (id)accountPropertyForKey:(id)a0;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (void)setAuthenticationTypeParent;
- (void)setAuthenticationTypeNone;
- (id)initWithIdentifier:(id)a0 accountTypeIdentifier:(id)a1 backingAccount:(id)a2 initialProperties:(id)a3;

@end
