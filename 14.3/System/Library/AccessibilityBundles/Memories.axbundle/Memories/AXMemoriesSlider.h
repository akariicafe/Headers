@class NSString;

@interface AXMemoriesSlider : UIAccessibilityElement

@property (nonatomic) long long sliderType;
@property (retain, nonatomic) NSString *selectedDescription;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)_accessibilityUserTestingElementBaseType;
- (id)accessibilityValue;
- (id)_axContainingCollectionView;
- (long long)_axContainingSelectedItem;

@end
