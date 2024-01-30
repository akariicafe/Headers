@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {
    UILabel *_recurrenceLabel;
    double _lastLayoutWidth;
}

- (void)layoutForWidth:(double)a0 position:(int)a1;
- (double)height;
- (void)layoutSubviews;
- (void)setRecurrenceString:(id)a0;
- (void).cxx_destruct;
- (id)_myTableView;
- (id)_recurrenceLabel;

@end
