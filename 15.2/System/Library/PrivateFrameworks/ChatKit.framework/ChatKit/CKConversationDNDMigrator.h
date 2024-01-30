@interface CKConversationDNDMigrator : NSObject

- (void)migrateDNDInfoIfNeeded;
- (void)performDNDMigrationIfNecessary;
- (id)_dnd_deprecated_globalIdentifierForChat:(id)a0;

@end
