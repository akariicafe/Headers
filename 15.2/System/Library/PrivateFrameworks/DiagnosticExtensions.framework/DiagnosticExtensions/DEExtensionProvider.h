@class NSString;

@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling>

@property (nonatomic) BOOL isEnhancedLoggingStateOn;
@property (copy, nonatomic) NSString *loggingConsent;
@property (nonatomic) BOOL canGenerateNewAttachment;
@property (nonatomic) BOOL allowUserAttachmentSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLoggingEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)disableLogging;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(id /* block */)a0;
- (id)attachmentsForParameters:(id)a0;
- (BOOL)canEnableLogging;
- (void)enableLogging;
- (id)attachmentList;
- (id)attachmentsWithParams:(id)a0;
- (void)setupWithParameters:(id)a0;
- (void)teardownWithParameters:(id)a0;
- (id)filesInDir:(id)a0 matchingPattern:(id)a1 excludingPattern:(id)a2;
- (id)_getHostname;

@end
