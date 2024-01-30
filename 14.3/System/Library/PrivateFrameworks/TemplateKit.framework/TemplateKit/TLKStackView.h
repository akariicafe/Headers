@interface TLKStackView : NUIContainerStackView

@property (nonatomic) BOOL isForcedToBeVertical;
@property (nonatomic) BOOL flipsToVerticalAxisForAccessibilityContentSizes;

- (void)setAxis:(long long)a0;
- (void)setAlignment:(long long)a0;
- (void)addArrangedSubview:(id)a0;

@end
