@class SBPIPContentViewLayoutSizePreferences;

@interface SBPIPContentViewLayoutMetricsSizePolicy : NSObject {
    struct { double minimum; double maximum; } _landscapeAspectRatioInterval;
    struct { double minimum; double maximum; } _portraitAspectRatioInterval;
    struct { double minimum; double maximum; } _squareAspectRatioInterval;
    SBPIPContentViewLayoutSizePreferences *_landscapeSizePref;
    SBPIPContentViewLayoutSizePreferences *_portraitSizePref;
    SBPIPContentViewLayoutSizePreferences *_squareSizePref;
}

- (void).cxx_destruct;
- (id)initWithSizePreferencesForLandscape:(id)a0 portrait:(id)a1 square:(id)a2;
- (id)sizePreferencesForAspectRatio:(double)a0;

@end
