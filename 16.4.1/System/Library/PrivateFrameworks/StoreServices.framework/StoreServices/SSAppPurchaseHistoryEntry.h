@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity

+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)predicateForAccountIdentifier:(id)a0;
+ (id)predicateForHasMessagesExtension;
+ (id)predicateForIs32BitOnly:(BOOL)a0;
+ (id)predicateForNotFirstParty;
+ (id)predicateForNotHidden;
+ (id)supportsPlatformPredicate:(BOOL)a0;

@end
