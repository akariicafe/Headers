@class NSString, UIImage, UIImageView, UIButton, MRUActivityAccessoryView, BSUIEmojiLabelView, UILabel, CCUICAPackageView;

@interface MRUActivityMirroringView : UIView

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) BSUIEmojiLabelView *deviceNameView;
@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (retain, nonatomic) UIImageView *deviceImageView;
@property (readonly, nonatomic) MRUActivityAccessoryView *leadingView;
@property (readonly, nonatomic) MRUActivityAccessoryView *trailingView;
@property (readonly, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImage *deviceImage;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *state;

- (void)updateContentSizeCategory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)preferredHeightForBottomSafeArea;
- (void)updateVisibilty;
- (void)updateDeviceSymbolConfiguration;
- (void)updatePackageScale;

@end
