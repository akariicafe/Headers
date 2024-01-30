@class NSString, UIImageView, UIImage, UILabel;

@interface CNStarkHeaderPlatterView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *accessory;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) UIImage *accessoryImage;

- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)_updateForFocusedState:(BOOL)a0;
- (id)initWithLabelText:(id)a0 accessoryImage:(id)a1;

@end
