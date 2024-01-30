@class NSString, NSNumberFormatter;

@interface CEKApertureSlider : CEKDiscreteSlider <UIScrollViewDelegate>

@property (nonatomic, setter=_setMinimumApertureIndex:) unsigned long long _minimumApertureIndex;
@property (nonatomic, setter=_setMaximumApertureIndex:) unsigned long long _maximumApertureIndex;
@property (readonly, nonatomic) NSNumberFormatter *_decimalFormatter;
@property (readonly, nonatomic) NSNumberFormatter *_wholeNumberFormatter;
@property (readonly, nonatomic) double apertureValue;
@property (readonly, nonatomic) double minimumApertureValue;
@property (readonly, nonatomic) double maximumApertureValue;
@property (readonly, nonatomic) double markedApertureValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validApertureValues;
+ (unsigned long long)firstFullStopIndexAfterOrIncludingIndex:(unsigned long long)a0;
+ (BOOL)isValidApertureIndex:(unsigned long long)a0;
+ (BOOL)isValidApertureIndexFullStop:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)valueText;
- (void)setMinimumApertureValueClosestTo:(double)a0 maximumApertureValueClosestTo:(double)a1;
- (void)setApertureValueClosestTo:(double)a0;
- (void)setMarkedApertureValueClosestTo:(double)a0;
- (unsigned long long)_discreteIndexForValidApertureIndex:(unsigned long long)a0;
- (unsigned long long)_indexOfClosestValidValueForAperture:(double)a0;
- (void)_updateMainTickMarkOffset;
- (unsigned long long)_validApertureIndexForDiscreteIndex:(unsigned long long)a0;
- (double)horizontalValueLabelOffset;
- (void)setMarkedApertureValueToNone;

@end
