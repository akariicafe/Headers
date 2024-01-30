@class NSUUID, NSString, _UIRemoteViewController, NSExtension;

@interface SLTranscriptController : UIViewController <_UIRemoteViewControllerContaining>

@property (retain, nonatomic) NSUUID *requestUUID;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) _UIRemoteViewController *remoteViewController;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)deviceIsiPad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)presentTranscriptForMessageGUID:(id)a0 attachmentGUID:(id)a1 presentingViewController:(id)a2;

@end
