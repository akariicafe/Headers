@class NSRecursiveLock, NSString, DEExtensionHostContext, NSExtension;

@interface DEExtension : NSObject

@property (retain, nonatomic) NSExtension *extension;
@property (retain) NSRecursiveLock *extensionHostLoadingLock;
@property (retain, nonatomic) NSString *attachmentsName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) DEExtensionHostContext *context;
@property (nonatomic) BOOL isLoggingEnabled;
@property (retain, nonatomic) NSString *loggingConsent;
@property (nonatomic) BOOL allowUserAttachmentSelection;

- (void).cxx_destruct;
- (BOOL)checkAndTeardown;
- (void)attachmentListWithHandler:(id /* block */)a0;
- (void)endUsingExtension;
- (void)createExtensionHostContextCompletion:(id /* block */)a0;
- (void)performWithHostContext:(id /* block */)a0;
- (void)setupWithParameters:(id)a0 session:(id)a1 expirationDate:(id)a2;
- (Class)extensionTrackerClass;
- (id)initWithNSExtension:(id)a0;
- (void)attachmentsForParameters:(id)a0 andHandler:(id /* block */)a1;
- (void)setupWithParameters:(id)a0 session:(id)a1;
- (void)teardownWithParameters:(id)a0 session:(id)a1;
- (id)description;

@end
