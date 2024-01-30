@interface EKEventDetailAlarmCell : EKEventDetailTwoValueCell

+ (id)_alertLocalizedString;

- (BOOL)isEditable;
- (void)setAlarms:(id)a0;
- (BOOL)update;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 platformStyle:(int)a2;

@end
