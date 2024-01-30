@class NSString;
@protocol DevicePINControllerDelegate;

@interface MCUIPINController : DevicePINController <UIAdaptivePresentationControllerDelegate>

@property (weak, nonatomic) id<DevicePINControllerDelegate> delegate;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateStyle;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)pinInstructionsPrompt;

@end
