@interface CKConversationDNDMigrator : NSObject

- (id)_dnd_deprecated_globalIdentifierForChat:(id)a0;
- (void)migrateDNDInfoIfNeeded;
- (void)performDNDMigrationIfNecessary;

@end
