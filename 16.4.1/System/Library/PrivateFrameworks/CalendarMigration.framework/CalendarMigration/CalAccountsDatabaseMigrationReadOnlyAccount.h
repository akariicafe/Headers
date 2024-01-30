@class NSString, NSMutableDictionary;

@interface CalAccountsDatabaseMigrationReadOnlyAccount : NSObject <CalMigrationReadOnlyAccount> {
    NSString *_identifier;
    NSString *_parentAccountIdentifier;
    NSString *_accountTypeIdentifier;
    NSMutableDictionary *_accountProperties;
}

@property (readonly, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) BOOL enabledForCalendarsDataClass;
@property (readonly, nonatomic) BOOL provisionedForCalendarsDataClass;
@property (readonly, nonatomic) BOOL visible;
@property (readonly, nonatomic) BOOL authenticated;
@property (readonly, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountPropertyForKey:(id)a0;
- (id)accountTypeIdentifier;
- (id)identifier;
- (id)parentAccountIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 accountTypeIdentifier:(id)a2 description:(id)a3 enabledForCalendarDataClass:(BOOL)a4 provisionedForCalendarDataClass:(BOOL)a5 visible:(BOOL)a6 authenticated:(BOOL)a7 username:(id)a8 properties:(id)a9;

@end
