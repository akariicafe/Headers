@class NSArray, NSString, UIImage, UISlider, UILabel, HFItem;
@protocol HUResizableCellDelegate, HUSliderValueTableViewCellDelegate;

@interface HUSliderValueTableViewCell : UITableViewCell <HUDisableableCellProtocol, HUCellProtocol>

@property (retain, nonatomic) UISlider *slider;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (weak, nonatomic) id<HUSliderValueTableViewCellDelegate> delegate;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double value;
@property (nonatomic) BOOL showValue;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (retain, nonatomic) UIImage *minimumValueImage;
@property (retain, nonatomic) UIImage *maximumValueImage;
@property (nonatomic) BOOL useLargeCell;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)didMoveToSuperview;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_sliderChanged:(id)a0;
- (void)_setupAutoLayoutConstraints;

@end
