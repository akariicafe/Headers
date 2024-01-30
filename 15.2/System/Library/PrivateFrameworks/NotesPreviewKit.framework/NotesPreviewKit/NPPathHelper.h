@interface NPPathHelper : NSObject

+ (void)performBlockInPersonaContextIfNecessary:(id /* block */)a0 forAccountIdentifier:(id)a1;
+ (id)applicationDocumentsURLForAccountIdentifier:(id)a0;
+ (id)accountFilesDirectoryURLForAccountID:(id)a0;

@end
