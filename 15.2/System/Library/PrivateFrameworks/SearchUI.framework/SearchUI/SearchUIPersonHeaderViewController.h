@class NSArray, NSString, SKStatusSubscriptionService;

@interface SearchUIPersonHeaderViewController : CNGroupIdentityHeaderViewController <SKStatusSubscriptionServiceDelegate>

@property (retain) SKStatusSubscriptionService *subscriptionService;
@property (retain) NSArray *statusSubcriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsViewConfiguration;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)groupIdentityDidUpdate:(id)a0;
- (void)updateSubscriptions;
- (BOOL)userIsUnavailable;
- (void)subscriptionInvitationReceived:(id)a0;
- (void)subscriptionReceivedStatusUpdate:(id)a0;
- (void)subscriptionStateChanged:(id)a0;
- (void)updateWithContact:(id)a0;

@end
