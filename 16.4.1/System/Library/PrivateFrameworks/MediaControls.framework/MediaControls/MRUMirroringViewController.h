@class NSString, MRUMirroringController;

@interface MRUMirroringViewController : CCUIMenuModuleViewController <MRUMirroringControllerDelegate>

@property (retain, nonatomic) MRUMirroringController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)mirroringController:(id)a0 didUpdateBusyIdenifiers:(id)a1;
- (void)selectOutputDevice:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)mirroringController:(id)a0 didChangeAvailableOutputDevices:(id)a1;
- (void)updateItems;
- (void)stopMirroringDismissOnComplete:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateFooter;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)updateState;
- (void)mirroringController:(id)a0 didChangeOutputDevice:(id)a1;
- (void).cxx_destruct;
- (id)leadingImageForMenuItem:(id)a0;
- (void)viewWillAppear:(BOOL)a0;

@end
