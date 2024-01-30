@class HMICameraVideoFrame, NSArray, NSDictionary, NSSet;

@interface HMICameraVideoFrameResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMICameraVideoFrame *frame;
@property (readonly) NSDictionary *annotationScores;
@property (readonly) long long events;
@property (readonly) NSArray *detections;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionOfInterest;
@property (readonly) NSSet *faceClassifications;
@property (readonly) NSSet *analyzerEvents;

+ (long long)_eventsFromAnalyzerEvents:(id)a0;
+ (id)_annotationScoresFromAnalyzerEvents:(id)a0;
+ (id)_detectionsFromAnalyzerEvents:(id)a0;
+ (id)_faceClassificationsFromAnalyzerEvents:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)maxConfidenceEventForEventClass:(Class)a0;
- (long long)confidenceThatEventOccurred:(long long)a0;
- (id)initWithFrame:(id)a0 events:(long long)a1 annotationScores:(id)a2 detections:(id)a3 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 faceClassifications:(id)a5;
- (id)initWithFrame:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 analyzerEvents:(id)a2;

@end
