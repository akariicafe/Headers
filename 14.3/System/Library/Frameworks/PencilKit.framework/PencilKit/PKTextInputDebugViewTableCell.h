@class NSString, UILabel, NSAttributedString, UIButton;
@protocol PKTextInputDebugViewTableCellDelegate;

@interface PKTextInputDebugViewTableCell : UITableViewCell

@property (retain, nonatomic) UILabel *_titleLabel;
@property (retain, nonatomic) UILabel *_valueLabel;
@property (retain, nonatomic) UIButton *_detailsButton;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSAttributedString *valueAttributedText;
@property (nonatomic) BOOL showDetailsButton;
@property (copy, nonatomic) NSString *statusKey;
@property (weak, nonatomic) id<PKTextInputDebugViewTableCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_updateLabels;
- (void)_handleDetailsButton:(id)a0;
- (void)_setupContentViewsIfNeeded;

@end
