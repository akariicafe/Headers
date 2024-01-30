@class NSString, NSMapTable, UIViewController;
@protocol GKExtensionHostViewControllerDelegate, GKSocialGamingHostInterface;

@interface GKExtensionHostViewController : _UIRemoteViewController <GKSocialGamingHostInterface, GKSocialGamingExtensionInterface>

@property (retain, nonatomic) NSMapTable *targetForSelector;
@property (weak, nonatomic) id<GKExtensionHostViewControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController<GKSocialGamingHostInterface> *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)methodSignatureForProtocol:(id)a0 selector:(SEL)a1;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)addTarget:(id)a0 forProtocol:(id)a1 toLookup:(id)a2;
- (void)buildLookupForHost:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (oneway void)finishExtension;
- (oneway void)extensionWillFinish;

@end
