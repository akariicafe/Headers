@class UIViewController, NSString, _UIResilientRemoteViewContainerViewController, MPMusicMediaPickerRemoteViewController, MPMediaPickerController;

@interface MPMediaPickerController_Appex : NSObject <MPMediaPickerRemoteViewLoader> {
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;
    MPMusicMediaPickerRemoteViewController *_musicRemoteViewController;
}

@property (weak, nonatomic) MPMediaPickerController *mediaPickerController;
@property (readonly, nonatomic) UIViewController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)synchronizeSettings;
- (void)requestRemoteViewController;
- (id)serviceController;

@end
