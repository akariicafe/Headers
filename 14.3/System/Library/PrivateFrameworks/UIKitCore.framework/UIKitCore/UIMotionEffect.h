@class NSString, _UIMotionAnalyzerSettings;

@interface UIMotionEffect : NSObject <NSCopying, NSCoding> {
    _UIMotionAnalyzerSettings *_preferredMotionAnalyzerSettings;
    NSString *_animationIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x0; double x1; })a0;
- (id)_keyPathsAndRelativeValuesForPose:(id)a0;
- (id)_animationIdentifier;
- (id)_preferredMotionAnalyzerSettings;
- (void)_setPreferredMotionAnalyzerSettings:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
