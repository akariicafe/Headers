@class HFItem, UIStepper, NSString, UILabel, NSNumber;
@protocol HUResizableCellDelegate, HUStepperCellDelegate;

@interface HUStepperCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUStepperCellProtocol>

@property (retain, nonatomic) UIStepper *stepper;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (weak, nonatomic) id<HUStepperCellDelegate> stepperCellDelegate;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *stepValue;
@property (copy, nonatomic) NSNumber *stepperValue;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)_valueDescription;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_stepperValueDidChange:(id)a0;
- (void)_toggleValueChange:(id)a0;

@end
