@class NSArray, NSCalendar, NSDate;

@interface NTKColorCodeTimeView : UIView {
    NSArray *_colorViews;
    NSArray *_digitToColor;
    NSCalendar *_cal;
}

@property (retain, nonatomic) NSDate *date;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
