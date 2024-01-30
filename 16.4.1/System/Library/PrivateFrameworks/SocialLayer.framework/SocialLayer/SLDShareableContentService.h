@class FBSDisplayLayoutMonitor, NSString, NSUserActivity, NSObject;
@protocol OS_dispatch_queue;

@interface SLDShareableContentService : NSObject <SLDService, SLDShareableContentServiceProtocol>

@property (readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (copy, nonatomic) id /* block */ retrieveShareableContentBlock;
@property (nonatomic) BOOL isLayoutMonitorReady;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUserActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;
+ (void)setupInterface:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadDataRepresentationFromSourceIdentifier:(id)a0 requestedTypeIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadInPlaceFileRepresentationFromSourceIdentifier:(id)a0 requestedTypeIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentMessageComposeSheetForSourceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)retrieveShareableContentMetadataWithCompletion:(id /* block */)a0;
- (void)shareCollaborationData:(id)a0 faceTimeConversationUUID:(id)a1 completionHandler:(id /* block */)a2;
- (id)_applicationIdentifierForConnection:(id)a0;
- (BOOL)_connShouldAllowBackgroundCollaboration:(id)a0;
- (BOOL)allowsConnection:(id)a0;
- (void)fetchShareableContentFromSourceIdentifier:(id)a0 requestedTypeIdentifier:(id)a1 responseHandler:(id /* block */)a2;
- (void)launchApplicationWithBundleIdentifier:(id)a0 forActions:(id)a1 completionHandler:(id /* block */)a2;
- (void)performAction:(id)a0 onApplicationWithBundleIdentifier:(id)a1;
- (BOOL)populateInitiatorMetadata:(id)a0 name:(id)a1 email:(id)a2;
- (void)populateInitiatorMetadata:(id)a0 request:(id)a1 completionHandler:(id /* block */)a2;
- (id)visibleApplicationForSourceIdentifier:(id)a0;
- (id)visibleApplications;

@end
