@class NSLayoutConstraint;

@interface CPSAspectFitImageView : UIImageView

@property (retain, nonatomic) NSLayoutConstraint *aspectConstraint;

- (void)_updateConstraints;
- (void)setImage:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
