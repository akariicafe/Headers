@class NSString, NSNumber, NSUserDefaults;

@interface SNUserDefaults : NSObject

@property (class, readonly) BOOL enableSecondPassRecordingInDaemon;
@property (class, readonly) NSString *daemonRecordingPath;
@property (class, readonly) long long recordingDirectoryMaximumSizeBytes;
@property (class, readonly) double recordingTimeToLiveSeconds;
@property (class, readonly) BOOL deleteRecordingsWithoutDetection;
@property (class, readonly) BOOL enableFileServer;
@property (class, readonly) NSString *fileServerRootDirectory;
@property (class, readonly) NSNumber *builtInMicrophoneAnalysisChannelNumber;
@property (class, readonly) BOOL enableVerboseLogging;

@property (retain, nonatomic) NSUserDefaults *userDefaults;

+ (id)instance;
+ (id)userDefaults;
+ (unsigned int)builtInMicrophoneAnalysisChannelNumberOrDefault:(unsigned int)a0;

- (void).cxx_destruct;
- (id)init;

@end
