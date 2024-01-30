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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;

@end
