@class NSString, AVTCircularButton, UIImageSymbolConfiguration;

@interface AVTSimpleAvatarPickerHeaderView : UICollectionReusableView

@property (retain, nonatomic) NSString *currentSymbolName;
@property (retain, nonatomic) UIImageSymbolConfiguration *plusSymbolConfiguration;
@property (retain, nonatomic) UIImageSymbolConfiguration *ellipsisSymbolConfiguration;
@property (readonly, nonatomic) AVTCircularButton *button;
@property (copy, nonatomic) id /* block */ buttonPressedBlock;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (void)setupLayout;
- (void)updateForEditMode:(BOOL)a0 animated:(BOOL)a1;
- (void)updateWithSymbolNamed:(id)a0 configuration:(id)a1 animated:(BOOL)a2;

@end
