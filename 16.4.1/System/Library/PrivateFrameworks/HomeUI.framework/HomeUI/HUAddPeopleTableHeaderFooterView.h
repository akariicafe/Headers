@class UIView;

@interface HUAddPeopleTableHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *topBorder;
@property (retain, nonatomic) UIView *bottomBorder;
@property (nonatomic) BOOL needsTopBorder;
@property (nonatomic) BOOL needsBottomBorder;

+ (double)preferredHeight;
+ (id)identifier;

- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;

@end
