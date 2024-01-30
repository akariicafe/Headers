@class NSLayoutConstraint;

@interface CPSAspectFitImageView : UIImageView

@property (retain, nonatomic) NSLayoutConstraint *aspectConstraint;

- (id)init;
- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)setImage:(id)a0;

@end
