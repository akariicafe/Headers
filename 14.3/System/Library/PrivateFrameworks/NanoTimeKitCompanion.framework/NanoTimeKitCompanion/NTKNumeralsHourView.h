@class UIColor, NTKNumeralsAnalogFaceConfiguration;

@interface NTKNumeralsHourView : UIImageView {
    long long _hour;
    unsigned long long _style;
    NTKNumeralsAnalogFaceConfiguration *_faceConfiguration;
    UIColor *_appliedColor;
}

@property (readonly) BOOL isLoaded;

- (void)load;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initUnloadedHourViewForHour:(long long)a0 style:(unsigned long long)a1 faceConfiguration:(id)a2;
- (id)_imageNameForStyle:(unsigned long long)a0 hour:(long long)a1;
- (void)applyFaceColorFromFaceConfiguration:(id)a0;
- (id)_hourColorForDevice:(id)a0 faceColor:(unsigned long long)a1 colorSchemeUnits:(unsigned long long)a2;
- (void)_applyTintColor:(id)a0;
- (id)initForHour:(long long)a0 style:(unsigned long long)a1 faceConfiguration:(id)a2;
- (void)applyTransitionFraction:(double)a0 fromFaceColor:(unsigned long long)a1 toFaceColor:(unsigned long long)a2 faceConfiguration:(id)a3;

@end
