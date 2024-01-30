@class GKLabel, GKHairlineView, NSString;

@interface GKBaseComposeHeaderField : UIImageView

@property (retain, nonatomic) GKLabel *nameLabel;
@property (retain, nonatomic) GKHairlineView *separatorView;
@property (nonatomic) unsigned long long maxLineCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } valueFrame;
@property (retain, nonatomic) NSString *nameText;
@property (retain, nonatomic) NSString *valueText;
@property (nonatomic) SEL actionWhenTouched;

- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (id)viewForBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addConstraintsForValueView:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
