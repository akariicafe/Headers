@protocol CALNNotificationStorage, CALNIconIdentifierVersionProvider, CALNIconCache, CALNCalendarIconIdentifierProvider, CALNNotificationManager;

@interface CALNNotificationIconUpdater : NSObject

@property (readonly, nonatomic) id<CALNIconIdentifierVersionProvider> identifierVersionProvider;
@property (readonly, nonatomic) id<CALNNotificationStorage> protectedStorage;
@property (readonly, nonatomic) id<CALNIconCache> iconCache;
@property (readonly, nonatomic) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (readonly, nonatomic) id<CALNNotificationManager> notificationManager;

- (id)initWithIconIdentifierVersionProvider:(id)a0 protectedNotificationStorage:(id)a1 iconCache:(id)a2 iconIdentifierProvider:(id)a3 notificationManager:(id)a4;
- (void)_updateAllIconIdentifiersInStorage:(id)a0;
- (void).cxx_destruct;
- (void)updateIconsToNewVersionIfNeeded;

@end
