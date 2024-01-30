@interface TVLPersistenceManager : NSObject

+ (id)documentsDirectory:(id)a0;
+ (id)recordingsDirectory:(id)a0;
+ (id)URLForRecording;
+ (id)allRecordingPaths;
+ (void)eraseAllRecordings;

@end
