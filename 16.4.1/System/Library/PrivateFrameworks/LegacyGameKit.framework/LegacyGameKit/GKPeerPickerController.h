@class GKPeerPickerViewController;
@protocol GKPeerPickerControllerDelegate;

@interface GKPeerPickerController : NSObject

@property (retain) id picker;
@property (readonly, nonatomic) GKPeerPickerViewController *pickerViewController;
@property (nonatomic) unsigned long long connectionTypesMask;
@property (weak, nonatomic) id<GKPeerPickerControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;

+ (void)initialize;

- (void)dismiss;
- (void)show;
- (void)dealloc;
- (id)init;
- (id)pickerViewController;
- (void)_createPicker;
- (void)peerPickerViewController:(id)a0 didConnectPeer:(id)a1 toSession:(id)a2;
- (void)peerPickerViewController:(id)a0 didSelectConnectionType:(unsigned long long)a1;
- (id)peerPickerViewController:(id)a0 sessionForConnectionType:(unsigned long long)a1;
- (void)peerPickerViewControllerDidCancel:(id)a0;

@end
