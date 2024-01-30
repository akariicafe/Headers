@class NSMutableDictionary, NSMutableString, AXMVisionFeature, NSMutableArray;

@interface AXMDescriptionBuilder : NSObject {
    long long _builderOptions;
    NSMutableString *_speakableDescription;
    NSMutableString *_visualDescription;
    NSMutableArray *_faceFeatures;
    NSMutableDictionary *_classificationLabelsToLocValuesMap;
    NSMutableArray *_iconClassFeatures;
    AXMVisionFeature *_captionFeature;
}

@property (retain, nonatomic) AXMVisionFeature *blurFeature;
@property (retain, nonatomic) AXMVisionFeature *brightnessFeature;
@property (nonatomic) BOOL isNSFW;
@property (nonatomic) BOOL shouldModifyCaptionForSensitiveContent;
@property (retain, nonatomic) AXMVisionFeature *primarySensitiveContentFeature;

+ (id)builderWithOptions:(long long)a0;

- (id)_initWithOptions:(long long)a0;
- (void).cxx_destruct;
- (void)_addCaptionInformationToDescription:(id)a0 didConsumeDetectedFaceInfo:(BOOL *)a1;
- (void)_addPersonSummaryToDescription:(id)a0;
- (void)_addBlurInformationToDescription:(id)a0;
- (void)_addBrightnessInformationToDescription:(id)a0;
- (void)_addClassificationInformationToDescription:(id)a0;
- (void)_addDetailedFaceInformationToDescription:(id)a0;
- (void)_addFaceInformationToDescription:(id)a0;
- (void)_addGenericTemplateForCaptionInformationToDescription:(id)a0;
- (void)_addIconClassInformationToDescription:(id)a0;
- (void)_appendPauseType:(long long)a0 toDescriptionIfNeeded:(id)a1;
- (void)_appendToDescription:(id)a0 afterPauseType:(long long)a1 withContents:(id)a2;
- (id)_ignoredTagsForTags:(id)a0;
- (id)_knownPersonNames;
- (BOOL)_shouldPersonalizeCaptionWithKnownPeople;
- (BOOL)_shouldReplaceCaptionWithGenericTemplate;
- (BOOL)_shouldSummarizeDetectedPeople;
- (id)_stringForPauseType:(long long)a0;
- (id)_subsumedTagsForTags:(id)a0;
- (id)_templateRulesForTag:(id)a0;
- (BOOL)_usesTemplateForLowConfidenceAndExplicitFeatures;
- (void)addDetectedClassificationFeatures:(id)a0;
- (void)addDetectedClassificationLocalizedValue:(id)a0 forLabel:(id)a1;
- (void)addDetectedFaces:(id)a0;
- (void)addDetectedIconClasses:(id)a0;
- (id)buildSpeakableDescription;
- (id)buildVisualDescription;
- (void)setDetectedCaption:(id)a0;

@end
