@class NSLayoutConstraint;

@interface CPSHairlineView : UIView

@property (nonatomic) long long axis;
@property (retain, nonatomic) NSLayoutConstraint *strokeThicknessConstraint;

+ (id)grayHairlineViewAlongAxis:(long long)a0;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateStrokeThickness;
- (id)initWithAxis:(long long)a0 color:(id)a1;

@end
