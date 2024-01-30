@class NSString, SBNotificationBannerDestination;

@interface SBNotificationLongLookBannerPresentationObservationToken : SBPresentationObservationToken <SBNotificationBannerDestinationObserver>

@property (readonly, nonatomic) SBNotificationBannerDestination *notificationBannerDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)state;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNotificationBannerDestination:(id)a0;
- (void)notificationBannerDestinationWillPresentLongLook:(id)a0;
- (void)notificationBannerDestinationDidPresentLongLook:(id)a0;
- (void)notificationBannerDestinationWillDismissLongLook:(id)a0;
- (void)notificationBannerDestinationDidDismissLongLook:(id)a0;

@end
