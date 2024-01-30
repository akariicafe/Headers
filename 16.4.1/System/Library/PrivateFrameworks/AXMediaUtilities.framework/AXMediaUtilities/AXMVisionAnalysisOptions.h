@class AXMBrailleEdgeDetectorOptions, NSArray, NSData, NSLocale, AXMTextDetectionOptions;

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
@property (nonatomic) BOOL detectObjects;
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
@property (nonatomic) BOOL detectBrailleEdges;
@property (retain, nonatomic) AXMBrailleEdgeDetectorOptions *brailleEdgeOptions;
@property (nonatomic) BOOL detectAXElements;
@property (retain, nonatomic) NSData *equivalenceToken;
@property (nonatomic) BOOL detectText;
@property (retain, nonatomic) AXMTextDetectionOptions *textDetectionOptions;
@property (nonatomic) BOOL includeImageInResult;
@property (retain, nonatomic) NSLocale *preferredOutputLocale;
@property (retain, nonatomic) NSArray *ignoredLayerContextIDs;
@property (retain, nonatomic) NSArray *includedLayerContextIDs;
@property (nonatomic) BOOL preserveInputImageSize;

+ (id)defaultOptions;
+ (id)voiceOverOptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)disableAllDetectors;

@end
