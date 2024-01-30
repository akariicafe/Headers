@class NSLayoutYAxisAnchor, NSString, UIImageView, UIImage, UILabel, NSLayoutConstraint, NSLayoutXAxisAnchor;

@interface STDashedVerticalDivider : UIView

@property (retain, nonatomic) UIImageView *dashedLine;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSLayoutConstraint *labelLeftConstraint;
@property (readonly) UIImage *dashedLineImage;
@property (copy, nonatomic) NSString *labelText;
@property (readonly) NSLayoutXAxisAnchor *dashedLineCenterXAnchor;
@property (readonly) NSLayoutYAxisAnchor *labelTopAnchor;
@property (nonatomic, getter=isSelected) BOOL selected;

- (void).cxx_destruct;
- (id)initWithTintColor:(id)a0;

@end
