@class NSLayoutConstraint, UILabel, UIStackView;

@interface WFContentAttributionTableViewCell : UITableViewCell

@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) NSLayoutConstraint *firstLineBaseLineConstaint;
@property (retain, nonatomic) NSLayoutConstraint *secondLineBaseLineConstaint;
@property (retain, nonatomic) UILabel *bundleNameLabel;
@property (retain, nonatomic) UILabel *accountIdentifierLabel;
@property (retain, nonatomic) UILabel *managedLevelLabel;
@property (retain, nonatomic) UILabel *disclosureLevelLabel;
@property (retain, nonatomic) UILabel *contentItemsCountLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateCellWithContentAttribution:(id)a0;

@end
