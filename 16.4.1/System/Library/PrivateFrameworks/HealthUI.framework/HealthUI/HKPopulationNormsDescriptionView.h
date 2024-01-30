@class UILabel;

@interface HKPopulationNormsDescriptionView : UIView

@property (retain, nonatomic) UILabel *classificationTitleLabel;
@property (retain, nonatomic) UILabel *classificationDescriptionLabel;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithTitle:(id)a0 description:(id)a1;

@end
