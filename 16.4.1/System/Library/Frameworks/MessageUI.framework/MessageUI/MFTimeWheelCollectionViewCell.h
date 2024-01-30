@class NSString, UIDatePicker, NSDate;
@protocol MFTimeWheelCollectionViewCellDelegate;

@interface MFTimeWheelCollectionViewCell : UICollectionViewListCell

@property (class, readonly, nonatomic) NSString *reusableIdentifier;

@property (retain, nonatomic) UIDatePicker *timePicker;
@property (weak, nonatomic) id<MFTimeWheelCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) NSDate *minimumDate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)datePickerChanged:(id)a0;

@end
