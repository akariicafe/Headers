@class NSArray, NSString, SKStatusSubscriptionService;
@protocol NSObject;

@interface SearchUIPersonHeaderViewController : CNGroupIdentityHeaderViewController <SKStatusSubscriptionServiceDelegate>

@property (retain) SKStatusSubscriptionService *subscriptionService;
@property (retain) NSArray *statusSubcriptions;
@property (retain, nonatomic) id<NSObject> downtimeStatusObserver;
@property (nonatomic) BOOL showingDowntimeBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downtimeBadgeStyleSettings;

- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)groupIdentityDidUpdate:(id)a0;
- (void)updateWithContact:(id)a0;
- (void)subscriptionInvitationReceived:(id)a0;
- (void)subscriptionReceivedStatusUpdate:(id)a0;
- (void)subscriptionStateChanged:(id)a0;
- (id)STUserID;
- (id)contactNameFor:(id)a0;
- (void)handleConfirmDowntimeToggleFor:(id)a0;
- (void)setupDowntimeStatusSubscription;
- (id)actionsViewConfigurationWithDowntimeButton:(BOOL)a0;
- (void)handleErrorResultFromDowntimeToggleFor:(id)a0 withError:(id)a1;
- (id)initWithDowntimeButton:(BOOL)a0;
- (void)updateDowntimeBadge;
- (void)updateDowntimeBadgeForceRecheck:(BOOL)a0;
- (void)updateSubscriptions;
- (BOOL)userIsUnavailable;

@end
