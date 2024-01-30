@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {
    UILabel *_recurrenceLabel;
    double _lastLayoutWidth;
}

- (void).cxx_destruct;
- (void)setRecurrenceString:(id)a0;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (double)height;
- (void)layoutSubviews;
- (id)_recurrenceLabel;
- (id)_myTableView;

@end
