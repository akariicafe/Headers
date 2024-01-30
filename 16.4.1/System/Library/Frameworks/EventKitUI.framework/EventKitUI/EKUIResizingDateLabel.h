@class NSDate;

@interface EKUIResizingDateLabel : UILabel

@property (retain) NSDate *date;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)minDateLabelWidth;
- (id)stringForDateThatFits;

@end
