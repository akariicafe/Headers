@class NSString;
@protocol DevicePINControllerDelegate;

@interface MCPINEntryViewController : DevicePINController <UIAdaptivePresentationControllerDelegate>

@property (weak, nonatomic) id<DevicePINControllerDelegate> delegate;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (void).cxx_destruct;
- (id)stringsBundle;
- (id)stringsTable;
- (id)init;

@end
