@interface WLKBadgingUtilities : NSObject

+ (id)currentBadgeNumber;
+ (BOOL)hasMigrated;
+ (BOOL)addBadgeIdentifier:(id)a0;
+ (id)sharedUtilities;
+ (id)badgeIdentifiers;
+ (BOOL)removeBadgeIdentifier:(id)a0;
+ (void)clearSavedBadgeIdentifiers;

- (id)_notificationCenter;
- (void)migrateToNewBadgingSystemIfNeeded;

@end
