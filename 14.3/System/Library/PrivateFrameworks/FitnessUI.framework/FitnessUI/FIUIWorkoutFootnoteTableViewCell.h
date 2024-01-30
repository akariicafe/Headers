@class NSString, UILabel, UIView;

@interface FIUIWorkoutFootnoteTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_footnoteLabel;
    UIView *_dividerView;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *footnoteText;

+ (double)preferredHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
