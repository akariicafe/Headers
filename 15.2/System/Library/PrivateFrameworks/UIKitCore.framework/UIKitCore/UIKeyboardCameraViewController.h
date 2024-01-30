@class NSString, NSExtension, UIKeyboardCameraRemoteViewController;
@protocol UIKeyboardCameraViewControllerDelegate;

@interface UIKeyboardCameraViewController : UIViewController <UIKeyboardCameraRemoteViewControllerHost>

@property (class, readonly, nonatomic, getter=isEnabled) BOOL enabled;

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) UIKeyboardCameraRemoteViewController *remoteViewController;
@property (weak, nonatomic) id<UIKeyboardCameraViewControllerDelegate> delegate;
@property (nonatomic) NSString *textContentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLiveTextEnabled;
+ (BOOL)isCameraRestricted;
+ (BOOL)isSupportedByDevice;
+ (void)_updateIsCameraRestricted;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)keyboardCameraDidCancel;
- (void)keyboardCameraDidUpdateString:(id)a0;
- (void)keyboardCameraDidAccept;
- (id)_backgroundColorForModalFormSheet;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
