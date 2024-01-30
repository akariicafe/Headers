@class NSString;

@interface PFMetadataIdentifier : NSObject

@property (class, readonly) NSString *quickTimeMetadataOriginatingSignature;
@property (class, readonly) NSString *quickTimeMetadataRenderOriginatingSignature;
@property (class, readonly) NSString *quickTimeMetadataContentIdentifier;
@property (class, readonly) NSString *quickTimeMetadataSpatialOverCaptureGroupIdentifier;
@property (class, readonly) NSString *quickTimeMetadataContainsSpatialOverCaptureContent;
@property (class, readonly) NSString *quickTimeMetadataVariationIdentifier;
@property (class, readonly) NSString *quickTimeMetadataLivePhotoMinimumClientVersion;
@property (class, readonly) NSString *quickTimeMetadataCaptureMode;
@property (class, readonly) NSString *quickTimeUserDataVideoLoopingType;
@property (class, readonly) NSString *quickTimeMetadataStillImageTime;
@property (class, readonly) NSString *quickTimeMetadataKeyLocationISO6709;
@property (class, readonly) NSString *quickTimeMetadataKeyActionVideoStabilizationStrength;

@end
