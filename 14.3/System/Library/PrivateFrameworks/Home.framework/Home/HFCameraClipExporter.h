@interface HFCameraClipExporter : NSObject

+ (id)destinationURLForStrippedAudioFileFromCameraClipUUIDString:(id)a0;
+ (id)destinationURLForMovieFileUsingKey:(id)a0;
+ (id)_exportableCameraName:(id)a0;
+ (double)durationOfCachedRecordingForCameraClip:(id)a0;
+ (double)durationOfRecordingAtURL:(id)a0;
+ (id)destinationURLForUploadPayloadFromCameraClipUUIDString:(id)a0;
+ (id)userFriendlyExportURLForCameraName:(id)a0 withStartDate:(id)a1;
+ (BOOL)hasCachedRecordingForCameraClip:(id)a0;

@end
