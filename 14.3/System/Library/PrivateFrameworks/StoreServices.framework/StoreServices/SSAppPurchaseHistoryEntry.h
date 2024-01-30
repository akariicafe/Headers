@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity

+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)predicateForNotHidden;
+ (id)predicateForAccountIdentifier:(id)a0;
+ (id)supportsPlatformPredicate:(BOOL)a0;
+ (id)predicateForNotFirstParty;
+ (id)predicateForHasMessagesExtension;
+ (id)predicateForIs32BitOnly:(BOOL)a0;

@end
