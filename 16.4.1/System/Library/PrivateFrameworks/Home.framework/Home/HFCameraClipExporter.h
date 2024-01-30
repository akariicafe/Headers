@interface HFCameraClipExporter : NSObject

+ (id)destinationURLForMovieFileUsingKey:(id)a0;
+ (BOOL)hasCachedRecordingForCameraClip:(id)a0;
+ (id)userFriendlyExportURLForCameraName:(id)a0 withStartDate:(id)a1;
+ (id)_exportableCameraName:(id)a0;
+ (id)destinationURLForStrippedAudioFileFromCameraClipUUIDString:(id)a0;
+ (double)durationOfCachedRecordingForCameraClip:(id)a0;

@end
