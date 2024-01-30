@class GKPeerPickerViewController;
@protocol GKPeerPickerControllerDelegate;

@interface GKPeerPickerController : NSObject {
    id _picker;
}

@property (readonly, nonatomic) GKPeerPickerViewController *pickerViewController;
@property (nonatomic) unsigned long long connectionTypesMask;
@property (weak, nonatomic) id<GKPeerPickerControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;

+ (void)initialize;

- (void)show;
- (id)init;
- (void)dealloc;
- (id)pickerViewController;
- (void)dismiss;
- (void)_createPicker;
- (void)peerPickerViewControllerDidCancel:(id)a0;
- (void)peerPickerViewController:(id)a0 didConnectPeer:(id)a1 toSession:(id)a2;
- (void)peerPickerViewController:(id)a0 didSelectConnectionType:(unsigned long long)a1;
- (id)peerPickerViewController:(id)a0 sessionForConnectionType:(unsigned long long)a1;

@end
