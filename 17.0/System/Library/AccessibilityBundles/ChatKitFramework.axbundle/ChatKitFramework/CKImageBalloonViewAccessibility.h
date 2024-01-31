@interface CKImageBalloonViewAccessibility : __CKImageBalloonViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (BOOL)_axIsJellyfishVideo;
- (BOOL)_axIsLocating;
- (BOOL)_axIsLocation;
- (BOOL)_axIsObscured;
- (BOOL)_axIsPhoto;
- (BOOL)_axIsSensitive;
- (BOOL)_axIsVideo;
- (id)_axLocationPlacemark;
- (id)_axMediaObject;
- (void)_axSetLocationPlacemark:(id)a0;
- (void)_axWarmLocationCoordinatePlacemarkIfNeededForMediaObject:(id)a0;

@end
