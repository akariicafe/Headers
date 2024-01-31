@class NSString;

@interface AXMemoriesSlider : UIAccessibilityElement

@property (nonatomic) long long sliderType;
@property (retain, nonatomic) NSString *selectedDescription;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)_accessibilityUserTestingElementBaseType;
- (id)_axContainingCollectionView;
- (long long)_axContainingSelectedItem;

@end
