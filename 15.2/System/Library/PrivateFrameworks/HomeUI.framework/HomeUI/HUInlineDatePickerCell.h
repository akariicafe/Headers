@class NSArray, NSString, UIDatePicker, NSDateComponents;
@protocol HUInlineDatePickerCellDelegate;

@interface HUInlineDatePickerCell : UITableViewCell <HUDisableableCellProtocol>

@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) NSArray *allConstraints;
@property (weak, nonatomic) id<HUInlineDatePickerCellDelegate> delegate;
@property (retain, nonatomic) NSDateComponents *timeComponents;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hideTitleLabel;
@property (nonatomic) double leftMargin;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
