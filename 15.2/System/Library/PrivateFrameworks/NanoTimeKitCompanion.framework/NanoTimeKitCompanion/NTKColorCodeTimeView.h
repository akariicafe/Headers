@class NSArray, NSCalendar, NSDate;

@interface NTKColorCodeTimeView : UIView {
    NSArray *_colorViews;
    NSArray *_digitToColor;
    NSCalendar *_cal;
}

@property (retain, nonatomic) NSDate *date;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;

@end
