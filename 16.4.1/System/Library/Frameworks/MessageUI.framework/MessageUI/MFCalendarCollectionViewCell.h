@class NSString, UIDatePicker;
@protocol MFCalendarCollectionViewCellDelegate;

@interface MFCalendarCollectionViewCell : UICollectionViewListCell

@property (class, readonly, nonatomic) NSString *reusableIdentifier;

@property (retain, nonatomic) UIDatePicker *datePicker;
@property (weak, nonatomic) id<MFCalendarCollectionViewCellDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)datePickerChanged:(id)a0;

@end
