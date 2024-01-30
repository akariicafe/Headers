@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {
    UILabel *_recurrenceLabel;
    double _lastLayoutWidth;
}

- (void)layoutSubviews;
- (double)height;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (void).cxx_destruct;
- (void)setRecurrenceString:(id)a0;
- (id)_recurrenceLabel;
- (id)_myTableView;

@end
