@class NSString;

@interface AXMemoriesSlider : UIAccessibilityElement

@property (nonatomic) long long sliderType;
@property (retain, nonatomic) NSString *selectedDescription;

- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)_accessibilityUserTestingElementBaseType;
- (id)_axContainingCollectionView;
- (long long)_axContainingSelectedItem;

@end
