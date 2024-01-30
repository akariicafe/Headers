@class NSData, NSArray, AXMTextDetectionOptions;

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long clientID;
@property (readonly, nonatomic) BOOL hasDetectionsEnabled;
@property (readonly, nonatomic) BOOL detectFaces;
@property (nonatomic) BOOL detectFaceRectangles;
@property (nonatomic) BOOL detectFaceNames;
@property (nonatomic) BOOL detectFaceAttributes;
@property (nonatomic) BOOL detectFaceExpressions;
@property (nonatomic) BOOL detectFaceLandmarks;
@property (nonatomic) BOOL detectFacePose;
@property (nonatomic) BOOL detectScenes;
@property (nonatomic) BOOL detectNSFW;
@property (nonatomic) BOOL detectSignificantEvents;
@property (nonatomic) BOOL detectModelClassifications;
@property (nonatomic) BOOL detectCaptions;
@property (nonatomic) BOOL detectTraits;
@property (nonatomic) BOOL detectRectangles;
@property (nonatomic) BOOL detectHorizon;
@property (nonatomic) BOOL detectProminentObjects;
@property (nonatomic) BOOL detectAesthetics;
@property (nonatomic) BOOL detectIconClass;
@property (nonatomic) BOOL detectAXElements;
@property (retain, nonatomic) NSData *equivalenceToken;
@property (nonatomic) BOOL detectText;
@property (retain, nonatomic) AXMTextDetectionOptions *textDetectionOptions;
@property (nonatomic) BOOL includeImageInResult;
@property (retain, nonatomic) NSArray *ignoredLayerContextIDs;
@property (retain, nonatomic) NSArray *includedLayerContextIDs;
@property (nonatomic) BOOL preserveInputImageSize;

+ (id)defaultOptions;
+ (id)voiceOverOptions;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)disableAllDetectors;
- (void)encodeWithCoder:(id)a0;

@end
