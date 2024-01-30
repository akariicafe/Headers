@class UILabel, NSArray, NSString;

@interface WFTableViewHeaderFooterTextView : UITableViewHeaderFooterView

@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) NSArray *horizontalConstraints;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double horizontalPadding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
