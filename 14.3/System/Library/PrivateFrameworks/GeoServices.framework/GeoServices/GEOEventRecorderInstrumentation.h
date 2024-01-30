@class NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface GEOEventRecorderInstrumentation : NSObject {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSString *_filepath;
    NSString *_geoFilepath;
    NSString *_movieFilepath;
    NSDate *_startDate;
}

+ (id)initializeDefaultInstrumentation;
+ (id)defaultInstrumentation;
+ (void)endInstrumentation;

- (id)init;
- (void).cxx_destruct;
- (void)_setupLogging;
- (void)initializeFilepaths;
- (void)_captureScreenVideo:(id)a0;
- (void)writeString:(id)a0 ToFilepath:(id)a1;
- (id)getRecordedFilePaths;
- (void)captureUIEvent:(id)a0;
- (void)captureUserActionLogMessageEvent:(id)a0;
- (void)captureEventRecorderScreenVideo;

@end
