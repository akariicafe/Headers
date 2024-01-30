@class UIImageView, _HKLegendDot, UILabel, HKLegendEntry;

@interface _HKLegendEntryView : UIStackView {
    HKLegendEntry *_currentLegendEntry;
    UILabel *_legendLabel;
    _HKLegendDot *_legendDot;
    UIImageView *_legendIcon;
}

@property (retain, nonatomic) HKLegendEntry *legendEntry;

- (void).cxx_destruct;
- (id)initWithLegendEntry:(id)a0;

@end
