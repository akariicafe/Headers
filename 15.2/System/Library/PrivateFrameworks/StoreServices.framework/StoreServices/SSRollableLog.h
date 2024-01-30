@class SSLogFileOptions, NSFileHandle, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSRollableLog : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastFileStatTime;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_source> *_fileObserverSource;
    SSLogFileOptions *_options;
}

@property (readonly) SSLogFileOptions *logOptions;

- (void)writeString:(id)a0;
- (void)_closeLogFile;
- (id)_activeLogFilePath;
- (void)_checkLogFileSize;
- (id)_logFilePathWithIndex:(long long)a0;
- (void)_rollLogFiles;
- (void)_openLogFile;
- (void)dealloc;
- (id)initWithLogOptions:(id)a0;

@end
