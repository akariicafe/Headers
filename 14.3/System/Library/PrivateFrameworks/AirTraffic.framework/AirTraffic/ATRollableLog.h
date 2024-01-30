@class NSString, NSFileHandle, NSDate, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ATRollableLog : NSObject {
    NSString *_directory;
    NSString *_baseFilename;
    NSString *_generationalFilenameFormat;
    NSObject<OS_dispatch_source> *_fdWatcher;
    NSObject<OS_dispatch_queue> *_logQueue;
    NSObject<OS_dispatch_queue> *_logRequestQueue;
}

@property (retain) NSDate *lastStatDate;
@property (retain) NSFileHandle *fh;

+ (id)_filenameWithBase:(id)a0 generationalFormat:(id)a1 generation:(int)a2;
+ (id)_generationalFormatFromBase:(id)a0;
+ (void)enableLogRolling;
+ (id)allLogFilesForFilename:(id)a0;
+ (id)loggerWithFilename:(id)a0;

- (void).cxx_destruct;
- (void)logString:(id)a0;
- (id)_filenameWithGenerationNumber:(int)a0;
- (id)_fullFilePathWithGenerationNumber:(int)a0;
- (void)_setFilePermissions:(id)a0;
- (void)_loadUpHandle;
- (id)_fullCompressedFilePathWithGenerationNumber:(int)a0;
- (id)compressFile:(id)a0;
- (void)_rollLogs;
- (void)_statFileIfNecessaryForRollingCheck;
- (void)logLine:(id)a0 withPrefix:(id)a1;
- (void)slurpDataFromFile:(id)a0;
- (id)initWithFilename:(id)a0;
- (void)logData:(id)a0;

@end
