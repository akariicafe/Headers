@class NSCountedSet, NSString;

@interface AKStatistics : NSObject

@property (retain, nonatomic) NSCountedSet *annotationsCounts;
@property (retain, nonatomic) NSString *documentType;
@property (retain, nonatomic) NSString *clientPrefix;

+ (id)nameForAnnotation:(id)a0;
+ (id)nameForClassName:(id)a0;

- (void).cxx_destruct;
- (void)_logCoreAnalyticsAnnotationCreateActionForAnnotationType:(id)a0 count:(unsigned long long)a1;
- (void)_logCoreAnalyticsAction:(id)a0;
- (void)_logCoreAnalyticsHUDPickActionForAnnotationType:(id)a0;
- (void)logAnnotationAdded:(id)a0;
- (void)logDocumentSaved;
- (void)logInkAnnotationStrokeAdded:(id)a0;
- (void)logShapeDetectionHUDPickedShape:(id)a0;
- (void)logShapeDetectionHUDShown;
- (void)resetLogging;

@end
