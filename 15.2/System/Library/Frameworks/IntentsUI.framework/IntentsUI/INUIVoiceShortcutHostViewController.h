@class INUIVoiceShortcutHostContext, NSString;
@protocol INUIVoiceShortcutRemoteViewControllerDelegate;

@interface INUIVoiceShortcutHostViewController : _UIRemoteViewController <INUIVoiceShortcutRemoteHostingInterface>

@property (retain, nonatomic) INUIVoiceShortcutHostContext *serviceContext;
@property (nonatomic) long long mode;
@property (weak, nonatomic) id<INUIVoiceShortcutRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (id)_voiceShortcutUIExtension;
+ (void)getViewControllerForAddingShortcut:(id)a0 completion:(id /* block */)a1;
+ (void)getViewControllerForEditingVoiceShortcut:(id)a0 completion:(id /* block */)a1;
+ (void)getViewControllerCompletion:(id /* block */)a0;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)remoteViewControllerProxy;
- (void).cxx_destruct;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)a0 error:(id)a1;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)a0 error:(id)a1;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)a0;

@end
