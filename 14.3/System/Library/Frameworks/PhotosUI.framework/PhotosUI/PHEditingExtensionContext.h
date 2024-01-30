@class PUEditingExtensionUndoAdapter, PUEditingInitialPayload, NSUndoManager;

@interface PHEditingExtensionContext : NSExtensionContext <PUEditingExtensionVendor> {
    long long _fullSizeImageExtensionHandle;
    long long _videoPathExtensionHandle;
}

@property (readonly) PUEditingInitialPayload *_initialPayload;
@property (retain, nonatomic) PUEditingExtensionUndoAdapter *undoAdapter;
@property (nonatomic) BOOL attemptUndoManagerAutoSetup;
@property (retain, nonatomic) NSUndoManager *undoManagerForBarButtons;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)_releaseSandboxExtensions;
- (void)dealloc;
- (void)queryHandlingCapabilityForAdjustmentData:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(id /* block */)a0;
- (void)setupUndoProxyWithXPCListenerEndpoint:(id)a0 attemptUndoManagerAutoSetup:(BOOL)a1;
- (void)finishContentEditing;
- (void)beginContentEditingWithCompletionHandler:(id /* block */)a0;
- (void)cancelContentEditingWithResponseHandler:(id /* block */)a0;
- (void)querySDKVersionWithResponseHandler:(id /* block */)a0;
- (id)_contentEditingController;

@end
