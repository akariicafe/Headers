@class UILabel, UIImageView, UIButton;
@protocol SHLibraryHeaderViewDelegate;

@interface SHLibraryHeaderView : UIView

@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *historyLabel;
@property (retain, nonatomic) UIImageView *accountWarningImageView;
@property (retain, nonatomic) UIButton *accountUpdateButton;
@property (nonatomic) BOOL showAccountUpgradeHint;
@property (weak, nonatomic) id<SHLibraryHeaderViewDelegate> delegate;

- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)didTapOnWarningButton:(id)a0;

@end
