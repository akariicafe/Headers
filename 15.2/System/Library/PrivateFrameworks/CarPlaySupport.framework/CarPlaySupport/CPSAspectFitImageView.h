@class NSLayoutConstraint;

@interface CPSAspectFitImageView : UIImageView

@property (retain, nonatomic) NSLayoutConstraint *aspectConstraint;

- (void)_updateConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)setImage:(id)a0;

@end
