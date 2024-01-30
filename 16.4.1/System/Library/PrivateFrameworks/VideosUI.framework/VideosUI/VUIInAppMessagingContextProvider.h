@class NSString, IAMPresentationPolicy, NSMutableSet;

@interface VUIInAppMessagingContextProvider : NSObject <IAMApplicationContextProvider>

@property (retain, nonatomic) IAMPresentationPolicy *normalPolicy;
@property (retain, nonatomic) IAMPresentationPolicy *restrictedPolicy;
@property (retain, nonatomic) NSMutableSet *subscriptionProperties;
@property (readonly) BOOL allowsModalMessageDisplay;
@property (nonatomic) double lastMessageDisplayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextPropertyWithName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_connectionType;
- (id)_locationStatus;
- (id)viewControllerForModalPresentation;
- (void)messageCoordinator:(id)a0 didRequestAction:(id)a1;
- (id)presentationPolicyForPolicyGroup:(long long)a0;
- (BOOL)_hasDownloads;
- (BOOL)_hasItunesDownloads;
- (BOOL)_hasItunesPurchases;
- (BOOL)_hasSubscriptionDownloads;
- (id)_runSubscriptionQuery:(id)a0;
- (id)_stringValueForKeyPath:(id)a0 dictionary:(id)a1;
- (id)queriedSubscriptionProperties;

@end
