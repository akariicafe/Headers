@class NSString, NSFileHandle;

@interface ASTrafficLogger : NSObject {
    NSFileHandle *_lookasideFileHandle;
    NSString *_lookasideFilePath;
    BOOL _didFlushLogs;
}

@property (nonatomic) BOOL isOutgoingTraffic;

+ (id)_logQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (void)logWBXMLData:(id)a0;
- (void)flushLogs;
- (void)logPlainTextData:(id)a0;
- (void)_moveLogFileContentsAtPath:(id)a0;
- (void)_openLookasideFile;

@end
