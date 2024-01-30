@class NSData, NSString, NSArray, AXMSemanticTextFactory, NSSet, AXMVisionFeature, CIImage, NSObject, AXMetricSession, NSDictionary, NSNumber;
@protocol NSSecureCoding;

@interface AXMVisionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *faceFeatures;
@property (readonly, nonatomic) NSArray *sceneClassificationFeatures;
@property (readonly, nonatomic) NSArray *objectClassificationFeatures;
@property (readonly, nonatomic) NSArray *modelClassificationFeatures;
@property (readonly, nonatomic) NSArray *captionFeatures;
@property (readonly, nonatomic) NSArray *ocrFeatures;
@property (readonly, nonatomic) NSArray *blurFeatures;
@property (readonly, nonatomic) NSArray *brightnessFeatures;
@property (readonly, nonatomic) NSArray *iconClassFeatures;
@property (readonly, nonatomic) BOOL includesNSFWFeatures;
@property (readonly, nonatomic) NSArray *sensitiveContentForCaptionFeatures;
@property (readonly, nonatomic) BOOL captionMayContainSensitiveContent;
@property (readonly, nonatomic) BOOL includesFeaturesForImageExploration;
@property (retain, nonatomic) NSString *detectedTextType;
@property (retain, nonatomic) NSString *detectedTextDescription;
@property (retain, nonatomic) NSString *detectedTextSummary;
@property (retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory;
@property (retain, nonatomic) CIImage *image;
@property (retain, nonatomic) NSArray *features;
@property (retain, nonatomic) NSSet *evaluatedFeatureTypes;
@property (retain, nonatomic) NSNumber *appliedImageOrientation;
@property (retain, nonatomic) AXMetricSession *metricSession;
@property (nonatomic) long long imageRegistrationState;
@property (retain, nonatomic) NSObject<NSSecureCoding> *userContext;
@property (retain, nonatomic) NSArray *effectiveTextDetectionLocales;
@property (readonly, nonatomic) AXMVisionFeature *colorInfoFeature;
@property (readonly, nonatomic) AXMVisionFeature *assetMetadataFeature;
@property (readonly, nonatomic) NSDictionary *detectedFeatureDictionary;
@property (readonly, nonatomic) NSString *localizedDetectedTextTypeHint;
@property (readonly, nonatomic) NSString *localizedDetectedTextSummaryHint;
@property (readonly, nonatomic) NSString *localizedDetectedTextHint;
@property (readonly, nonatomic) NSString *localizedDetectedIconHint;
@property (readonly, nonatomic) NSDictionary *featureGates;
@property (retain, nonatomic) NSData *equivalenceToken;
@property (retain, nonatomic) NSData *brailleEdges;

+ (id)resultWithImage:(id)a0 features:(id)a1 orientation:(id)a2 metricSession:(id)a3 userContext:(id)a4;
+ (id)resultWithImage:(id)a0 features:(id)a1 orientation:(id)a2 metricSession:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)detectedFeatureDescriptionWithOptions:(id)a0;
- (id)sortedFeatures;
- (BOOL)isEqualToAXMVisionResult:(id)a0;
- (id)parentOCRFeatureTypes;
- (id)_processFeatureChild:(id)a0;
- (id)smallestChildOCRFeatureTypes;
- (id)_processFeatureTree:(id)a0;
- (id)detectedCaptionFeatureDescriptionWithOptions:(id)a0;
- (id)detectedSceneClassificationFeatureDescriptionWithOptions:(id)a0;
- (id)captionTranslationLocale;
- (id)sensitiveContentFeatures;

@end
