@class NSString, _MKUILabel, NSLayoutConstraint;

@interface MKPlaceTextCell : MKPlaceSectionRowView

@property (retain, nonatomic) _MKUILabel *label;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (copy, nonatomic) NSString *text;

- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
