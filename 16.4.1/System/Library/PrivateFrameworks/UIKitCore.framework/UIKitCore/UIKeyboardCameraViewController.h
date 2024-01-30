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

+ (void)_updateIsCameraRestricted;
+ (BOOL)isCameraRestricted;
+ (BOOL)isLiveTextEnabled;
+ (BOOL)isSupportedByDevice;

- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_backgroundColorForModalFormSheet;
- (void)keyboardCameraDidAccept;
- (void)keyboardCameraDidCancel;
- (void)keyboardCameraDidUpdateString:(id)a0;
- (void)prepareWithCompletion:(id /* block */)a0;

@end
