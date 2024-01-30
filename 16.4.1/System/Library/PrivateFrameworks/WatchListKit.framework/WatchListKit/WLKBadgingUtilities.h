@interface WLKBadgingUtilities : NSObject

+ (void)clearSavedBadgeIdentifiers;
+ (BOOL)addBadgeIdentifier:(id)a0;
+ (id)currentBadgeNumber;
+ (id)sharedUtilities;
+ (BOOL)hasMigrated;
+ (id)badgeIdentifiers;
+ (BOOL)removeBadgeIdentifier:(id)a0;

- (id)_notificationCenter;
- (void)migrateToNewBadgingSystemIfNeeded;

@end
