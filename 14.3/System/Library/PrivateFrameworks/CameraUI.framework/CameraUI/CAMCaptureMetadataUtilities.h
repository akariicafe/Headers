@interface CAMCaptureMetadataUtilities : NSObject

+ (void)removeUnwantedKeysForPersistenceFromMetadata:(id)a0;
+ (id)metadataFromRequest:(id)a0;
+ (id)metadataFromPanoramaRequest:(id)a0;
+ (id)preciseCaptureDateFromStillImageMetadata:(id)a0;

@end
