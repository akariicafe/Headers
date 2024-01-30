@interface CAMCaptureMetadataUtilities : NSObject

+ (id)metadataFromPanoramaRequest:(id)a0;
+ (id)metadataFromRequest:(id)a0;
+ (id)preciseCaptureDateFromStillImageMetadata:(id)a0;
+ (void)removeUnwantedKeysForPersistenceFromMetadata:(id)a0;

@end
