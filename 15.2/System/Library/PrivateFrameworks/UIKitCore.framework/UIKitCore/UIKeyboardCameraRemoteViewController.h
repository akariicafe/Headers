@class NSString;
@protocol UIKeyboardCameraRemoteViewControllerHost;

@interface UIKeyboardCameraRemoteViewController : _UIRemoteViewController <UIKeyboardCameraRemoteViewControllerHost>

@property (weak, nonatomic) id<UIKeyboardCameraRemoteViewControllerHost> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (BOOL)_canShowWhileLocked;
- (void)keyboardCameraDidCancel;
- (void)keyboardCameraDidUpdateString:(id)a0;
- (void)keyboardCameraDidAccept;
- (void).cxx_destruct;

@end
