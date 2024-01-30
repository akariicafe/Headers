@class NSMutableArray, BTSDevice, MediaControlsBluetoothListeningModeButton;

@interface BTAccessoryListeningModeControl : PSTableCell {
    MediaControlsBluetoothListeningModeButton *_listeningModeButton;
    NSMutableArray *_listeningModesArray;
}

@property (nonatomic) int accessoryListeningModeSupport;
@property (weak, nonatomic) BTSDevice *currentDevice;

+ (long long)cellStyle;
+ (double)preferredHeight;

- (void)applicationDidBecomeActive:(id)a0;
- (BOOL)becomeFirstResponder;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)listeningMode;
- (BOOL)canBecomeFirstResponder;
- (BOOL)setListeningMode:(id)a0;
- (void)layoutSubviews;
- (void)bluetoothListeningModeButtonDidUpdateValue:(id)a0;

@end
