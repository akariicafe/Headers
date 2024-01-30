@class NSDictionary, NSXPCConnection;
@protocol ICQUIRemoteExtensionDelegate;

@interface ICQUIRemoteExtensionEntry : _EXExtension <iCloudQuotaUI.ExtensionXPCProtocol>

@property (class, nonatomic, retain) ICQUIRemoteExtensionEntry *sharedInstance;

@property (nonatomic, readonly) id<ICQUIRemoteExtensionDelegate> transformer;
@property (weak, nonatomic) NSXPCConnection *currentConnection;
@property (retain, nonatomic) NSDictionary *offerContext;

+ (void)dismissRemoteViewControllerWithError:(id)a0;
+ (id)extensionPointID;
+ (void)presentRemoteViewControllerWithContext:(id)a0 presentingViewController:(id)a1 completion:(id /* block */)a2;

- (BOOL)shouldAcceptConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForSceneConnectionWithConfiguration:(id)a0;
- (id)makeContentViewController;
- (void)dismissViewControllerWithError:(id)a0;
- (id)extensionMakeContentViewController;
- (void)extensionPrepareForSceneConnectionWith:(id)a0;
- (BOOL)extensionShouldAccept:(id)a0;
- (void)startConnectionWithContext:(id)a0 completion:(id /* block */)a1;

@end
