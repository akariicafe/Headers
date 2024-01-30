@class UIColor, NSSet, MediaControlsHapticPlayer, NSString;

@interface MediaControlsBluetoothListeningModeButton : MediaControlsExpandableButton

@property (retain, nonatomic) MediaControlsHapticPlayer *hapticPlayer;
@property (retain, nonatomic) UIColor *offColor;
@property (retain, nonatomic) NSSet *availableListeningModes;
@property (retain, nonatomic) NSString *selectedListeningMode;

- (void)cancelTrackingWithEvent:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_springAnimate:(id /* block */)a0;
- (void)setSelectedListeningMode:(id)a0 animated:(BOOL)a1;
- (void)playRequiresBothBudsInEarErrorHaptic;
- (void)playFailedValueChangedEventHaptic;
- (id)initForControlCenter;
- (void)playValueChangedEventHaptic;
- (void)playFailedValueChangedEventHapticWithMessage:(id)a0;

@end
