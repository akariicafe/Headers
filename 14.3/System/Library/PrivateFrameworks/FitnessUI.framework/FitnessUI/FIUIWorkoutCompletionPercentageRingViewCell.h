@class ARUIRingsView, FIUIDividerView, UIImageView, UILabel, HKWorkout;

@interface FIUIWorkoutCompletionPercentageRingViewCell : UITableViewCell

@property (retain, nonatomic) ARUIRingsView *ringsView;
@property (retain, nonatomic) UIImageView *gradientBackgroundImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) FIUIDividerView *separatorView;
@property (nonatomic) double currentCompletionFactor;
@property (retain, nonatomic) HKWorkout *workout;

+ (double)_ringDiameter;
+ (double)_ringTopPadding;
+ (double)_ringToTypeSpacing;
+ (double)_typeToSecondaryLabelSpacing;
+ (double)_secondaryLabelToSeparatorSpacing;
+ (double)rowHeightForWorkout:(id)a0 width:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 ringsViewRenderer:(id)a2;
- (void)setWorkout:(id)a0 fillRing:(BOOL)a1;
- (void)setWorkoutWithoutFillingRing:(id)a0;
- (void)animateRingWithCompletion:(id /* block */)a0;

@end
