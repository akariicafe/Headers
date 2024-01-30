@class NSArray, NSString, NSDictionary, ARCamera;

@interface ARImageDetectionResultData : NSObject <ARResultData, ARQATraceable, NSCopying>

@property (nonatomic) double timestamp;
@property (nonatomic) BOOL detectionOnly;
@property (nonatomic) BOOL predicted;
@property (nonatomic) BOOL providesWorldTrackingCameraPose;
@property (copy, nonatomic) ARCamera *currentCamera;
@property (copy, nonatomic) NSArray *detectedImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *tracingEntry;

+ (id)tracingEntryFormat;

@end
