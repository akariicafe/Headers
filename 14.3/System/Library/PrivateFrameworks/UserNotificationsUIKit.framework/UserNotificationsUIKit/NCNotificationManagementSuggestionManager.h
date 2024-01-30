@class NSMutableDictionary, NSString, NSMutableSet, NCNotificationRequest;
@protocol NCNotificationManagementSuggestionManagerDelegate;

@interface NCNotificationManagementSuggestionManager : NSObject <NCNotificationManagementContentProviderDelegate, NCNotificationManagementSuggestionDelegate>

@property (retain, nonatomic) NSMutableDictionary *notificationManagementSuggestionContentProviders;
@property (retain, nonatomic) NSMutableSet *sectionIdentifiersWithNotificationManagementSuggestions;
@property (retain, nonatomic) NCNotificationRequest *requestWithRemoteNotificationManagementSuggestion;
@property (retain, nonatomic) NCNotificationRequest *requestWithProvisionalNotificationManagementSuggestion;
@property (nonatomic) double scoreForRequestWithRemoteNotificationManagementSuggestion;
@property (weak, nonatomic) id<NCNotificationManagementSuggestionManagerDelegate> delegate;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)checkNotificationManagementSuggestionNeededForNotificationRequest:(id)a0;
- (void)notificationManagementContentProvider:(id)a0 requestsPresentingNotificationManagementViewType:(unsigned long long)a1 forNotificationRequest:(id)a2 withPresentingView:(id)a3;
- (void)notificationManagementContentProvider:(id)a0 keepNotificationsForSectionIdentifierForNotificationRequest:(id)a1;
- (void)_createNewQuietingSuggestionForNotificationRequest:(id)a0 sectionSettings:(id)a1;
- (void)logResponseForNotificationRequest:(id)a0 allowsNotifications:(BOOL)a1;
- (id)_sectionSettingsForSectionIdentifier:(id)a0;
- (id)auxiliaryOptionsContentProviderForNotificationRequest:(id)a0 isLongLook:(BOOL)a1;
- (void)_createNewPromotingSuggestionForNotificationRequest:(id)a0 sectionSettings:(id)a1;
- (void)_notificationManagementSuggestionResponse:(long long)a0 forNotificationRequest:(id)a1;
- (void)notificationManagementContentProvider:(id)a0 hasUpdatedContentForRequest:(id)a1;
- (void)_updateContentForNotificationRequest:(id)a0;
- (void)logResponseForNotificationRequest:(id)a0 deliveryQuietly:(BOOL)a1;
- (void)_addRemoteNotificationManagementSuggestionForRequest:(id)a0 withResponse:(BOOL)a1 score:(double)a2 sectionSettings:(id)a3 isPromotingSuggestion:(BOOL)a4;
- (void)_removeSuggestionIfNecessaryForNotificationRequest:(id)a0;
- (void)_addSuggestionForNotificationRequest:(id)a0 managementContentProvider:(id)a1;

@end
