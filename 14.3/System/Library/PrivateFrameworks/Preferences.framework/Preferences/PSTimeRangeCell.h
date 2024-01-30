@class UILabel, NSArray;
@protocol PSTimeRangeCellDelegate;

@interface PSTimeRangeCell : PSTableCell {
    UILabel *_fromTitle;
    UILabel *_toTitle;
    UILabel *_fromTime;
    UILabel *_toTime;
    NSArray *_constraints;
    id<PSTimeRangeCellDelegate> _delegate;
}

- (id)accessibilityConstraintsWithVariableBindings:(id)a0 metrics:(id)a1;
- (id)regularConstraintsWithVariableBindings:(id)a0 metrics:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;

@end
