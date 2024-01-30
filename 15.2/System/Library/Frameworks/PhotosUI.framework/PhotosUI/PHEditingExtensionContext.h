@class PUEditingExtensionUndoAdapter, NSUndoManager, NSNumber, PUEditingInitialPayload;

@interface PHEditingExtensionContext : NSExtensionContext <PUEditingExtensionVendor> {
    NSNumber *_fullSizeImageSandboxExtensionHandleWrapper;
    NSNumber *_videoPathSandboxExtensionHandleWrapper;
}

@property (readonly) PUEditingInitialPayload *_initialPayload;
@property (retain, nonatomic) PUEditingExtensionUndoAdapter *undoAdapter;
@property (nonatomic) BOOL attemptUndoManagerAutoSetup;
@property (retain, nonatomic) NSUndoManager *undoManagerForBarButtons;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)_contentEditingController;
- (void)_releaseSandboxExtensions;
- (void).cxx_destruct;
- (void)queryHandlingCapabilityForAdjustmentData:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(id /* block */)a0;
- (void)setupUndoProxyWithXPCListenerEndpoint:(id)a0 attemptUndoManagerAutoSetup:(BOOL)a1;
- (void)beginContentEditingWithCompletionHandler:(id /* block */)a0;
- (void)finishContentEditing;
- (void)cancelContentEditingWithResponseHandler:(id /* block */)a0;
- (void)querySDKVersionWithResponseHandler:(id /* block */)a0;
- (void)dealloc;

@end
