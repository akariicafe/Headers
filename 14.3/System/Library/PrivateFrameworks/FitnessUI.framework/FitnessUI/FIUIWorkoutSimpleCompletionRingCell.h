@class ARUIRingsView, UIImageView, UIView, UILabel;

@interface FIUIWorkoutSimpleCompletionRingCell : UITableViewCell

@property (retain, nonatomic) ARUIRingsView *ringsView;
@property (retain, nonatomic) UIImageView *ringImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *typeLabel;

+ (double)preferredHeightForWorkout:(id)a0 fittingWidth:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithWorkout:(id)a0;

@end
