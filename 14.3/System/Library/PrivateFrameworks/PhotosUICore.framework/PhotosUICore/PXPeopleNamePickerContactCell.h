@class NSArray, UIView, UILabel, CNAvatarView;

@interface PXPeopleNamePickerContactCell : PXPeopleNamePickerCell

@property (weak, nonatomic) UIView *labelsContainer;
@property (retain, nonatomic) NSArray *constraintsForVisibleSubtitle;
@property (retain, nonatomic) NSArray *constraintsForHiddenSubtitle;
@property (readonly, weak, nonatomic) CNAvatarView *contactAvatarView;
@property (readonly, weak, nonatomic) UILabel *subtitleLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
