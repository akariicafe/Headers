@class GKPeerPickerViewController;

@interface GKPeerPickerControllerInternal : NSObject {
    id _delegate;
    GKPeerPickerViewController *_pickerViewController;
    unsigned long long _connectionTypesMask;
}

@end
