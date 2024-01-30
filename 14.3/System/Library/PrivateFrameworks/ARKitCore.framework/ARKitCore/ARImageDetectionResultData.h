@class ARCamera, NSArray, NSString;

@interface ARImageDetectionResultData : NSObject <ARResultData, NSCopying>

@property (nonatomic) BOOL detectionOnly;
@property (nonatomic) BOOL predicted;
@property (nonatomic) BOOL providesWorldTrackingCameraPose;
@property (copy, nonatomic) ARCamera *currentCamera;
@property (copy, nonatomic) NSArray *detectedImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
