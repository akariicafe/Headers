@class UIButton, UIListContentView, NSArray;
@protocol EKUIFocusBannerTableViewCellDelegate;

@interface EKUIFocusBannerTableViewCell : UITableViewCell {
    UIButton *_focusFilterToggleButton;
    UIListContentView *_listContentView;
    NSArray *_constraints;
}

@property (nonatomic) BOOL on;
@property (weak, nonatomic) id<EKUIFocusBannerTableViewCellDelegate> delegate;

- (id)_configuration;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_updateView;
- (void).cxx_destruct;
- (void)_tapped;
- (id)_focusFilterButtonConfiguration;

@end
