@class UIButton;
@protocol HUToggleSectionHeaderDelegate;

@interface HUToggleSectionHeader : UITableViewHeaderFooterView

@property (retain, nonatomic) UIButton *toggleButton;
@property (nonatomic) unsigned long long toggleState;
@property (weak, nonatomic) id<HUToggleSectionHeaderDelegate> delegate;
@property (nonatomic) BOOL toggleButtonHidden;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_toggle:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
