@class NSLayoutConstraint;

@interface CPSHairlineView : UIView

@property (nonatomic) long long axis;
@property (retain, nonatomic) NSLayoutConstraint *strokeThicknessConstraint;

+ (id)grayHairlineViewAlongAxis:(long long)a0;

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithAxis:(long long)a0 color:(id)a1;
- (void)_updateStrokeThickness;

@end
