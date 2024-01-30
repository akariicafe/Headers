@class UIColor, UIImage, _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator;

@interface UISliderDataModel : NSObject {
    struct __CFDictionary { } *_contentLookup;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    _UIModulationFeedbackGenerator *_modulationFeedbackGenerator;
}

@property (readonly, nonatomic) float value;
@property (readonly, nonatomic) float minimumValue;
@property (readonly, nonatomic) float maximumValue;
@property (retain, nonatomic) UIImage *minimumValueImage;
@property (retain, nonatomic) UIImage *maximumValueImage;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (retain, nonatomic) UIColor *minimumTrackTintColor;
@property (retain, nonatomic) UIColor *maximumTrackTintColor;
@property (retain, nonatomic) UIColor *thumbTintColor;
@property (nonatomic) BOOL showValue;
@property (nonatomic, getter=isThumbEnabled) BOOL thumbEnabled;
@property (nonatomic, getter=isTrackEnabled) BOOL trackEnabled;
@property (nonatomic, getter=isMinimumTrackVisible) BOOL minimumTrackVisible;
@property (retain, nonatomic) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (retain, nonatomic) _UIModulationFeedbackGenerator *modulationFeedbackGenerator;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isTracking) BOOL tracking;

- (id)_contentForState:(unsigned long long)a0;
- (BOOL)setMaximumValue:(float)a0;
- (id)maximumTrackImageForState:(unsigned long long)a0;
- (void)setMinimumTrackImage:(id)a0 forState:(unsigned long long)a1;
- (BOOL)_setValue:(float)a0 minValue:(float)a1 maxValue:(float)a2;
- (void)dealloc;
- (void)setMinimumTrackImage:(id)a0 forStates:(unsigned long long)a1;
- (void)setMaximumTrackImage:(id)a0 forState:(unsigned long long)a1;
- (id)init;
- (id)minimumTrackImageForState:(unsigned long long)a0;
- (void)setMaximumTrackImage:(id)a0 forStates:(unsigned long long)a1;
- (void)_setContent:(id)a0 forState:(unsigned long long)a1;
- (void)setThumbImage:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)setMinimumValue:(float)a0;
- (BOOL)setValue:(float)a0;
- (void)setThumbImage:(id)a0 forStates:(unsigned long long)a1;
- (id)thumbImageForState:(unsigned long long)a0;

@end
