@class NSObject, NSNumber, NSString, DEExtensionHostContext, NSMutableArray, NSExtension;
@protocol OS_dispatch_queue;

@interface DEExtension : NSObject

@property (retain, nonatomic) NSExtension *extension;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) NSMutableArray *contextFetchHandlers;
@property BOOL isFetchingExtensionHostContext;
@property BOOL adoptsExtensionTrackerFlow;
@property long long callCount;
@property (retain) NSNumber *cachedRequiresDataClassBAccessToRun;
@property (retain, nonatomic) NSString *attachmentsName;
@property (retain, nonatomic) NSString *identifier;
@property (retain) DEExtensionHostContext *context;
@property (readonly, nonatomic) BOOL isLoggingEnabled;
@property (nonatomic) BOOL allowUserAttachmentSelection;
@property (retain, nonatomic) NSString *loggingConsent;

- (void)attachmentListWithHandler:(id /* block */)a0;
- (void)endUsingExtension;
- (void)setupWithParameters:(id)a0 session:(id)a1 expirationDate:(id)a2;
- (void)attachmentsForParameters:(id)a0 withProgressHandler:(id /* block */)a1 andHandler:(id /* block */)a2;
- (void)accessBundleWithSynchronousHandler:(id /* block */)a0;
- (void)removeLoggingProfileWithSessionID:(id)a0;
- (id)localizedConsentTextWithLocalization:(id)a0;
- (void)setupWithParameters:(id)a0 session:(id)a1;
- (void)attachmentsForParameters:(id)a0 andHandler:(id /* block */)a1;
- (void)installLoggingProfileWithSessionID:(id)a0;
- (void)createExtensionHostContextCompletion:(id /* block */)a0;
- (id)_fileContentsFromPlistWithKey:(id)a0 localization:(id)a1;
- (id)loggingProfileURLsFromExtension;
- (id)localizedDataCollectedSummaryWithLocalization:(id)a0;
- (void)dealloc;
- (void)performWithHostContext:(id /* block */)a0;
- (BOOL)requiresDataClassBAccessToRun;
- (id)initWithNSExtension:(id)a0;
- (id)localizedDataCollectedExplanationWithLocalization:(id)a0;
- (id)description;
- (Class)extensionTrackerClass;
- (void).cxx_destruct;
- (BOOL)checkAndTeardown;
- (void)teardownWithParameters:(id)a0 session:(id)a1;

@end
