@class NSString;
@protocol WFOutOfProcessWorkflowControllerHost;

@interface WFBackgroundShortcutRunnerHostExtensionContext : NSExtensionContext <WFOutOfProcessWorkflowControllerHost>

@property (weak, nonatomic) id<WFOutOfProcessWorkflowControllerHost> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)workflowDidStartFromWorkflowReference:(id)a0 attribution:(id)a1;
- (void)workflowDidFinishRunningWithError:(id)a0 cancelled:(BOOL)a1 reference:(id)a2;

@end
