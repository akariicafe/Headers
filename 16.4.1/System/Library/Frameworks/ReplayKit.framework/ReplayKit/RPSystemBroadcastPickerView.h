@class UIButton, NSString;

@interface RPSystemBroadcastPickerView : UIView <NSCoding>

@property (retain, nonatomic) UIButton *broadcastPickerButton;
@property (retain, nonatomic) NSString *preferredExtension;
@property (nonatomic) BOOL showsMicrophoneButton;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (void)addBroadcastPickerButton;
- (void)screenCaptureChanged;

@end
