@class NSNumber, NSObject;
@protocol OS_dispatch_source;

@interface WFLoggerFile : WFLoggerBase {
    NSObject<OS_dispatch_source> *_loggingTimer;
    unsigned char _loggingTimerStarted;
    struct __CFRunLoop { } *_runLoopRef;
    struct __CFString { } *_runLoopMode;
    unsigned char _classC;
    NSNumber *_logLifespanInDays;
    unsigned long long _privacy;
    unsigned long long _level;
    struct __CFString { } *_logFilePath;
    NSObject<OS_dispatch_source> *_eventSource;
    unsigned char _isFileLoggingEnabled;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_filePtr;
    struct __CFDate { } *_fileCreationDate;
    struct __CFDateFormatter { } *_dateFormatter;
    struct __CFString { } *_presetFilePath;
    struct __CFString { } *_directoryPath;
    struct __CFString { } *_fileNamePrefix;
    unsigned long long _maxFileSizeInBytes;
    unsigned long long _timerInterval;
    unsigned long long _fileAgeOutInterval;
}

@property (readonly, getter=getLogFilePath) const struct __CFString { } *logFilePath;
@property (readonly, getter=getLogDirPath) const struct __CFString { } *logDirPath;
@property (readonly, getter=getLogFileNamePrefix) const struct __CFString { } *logFileNamePrefix;

- (void)dealloc;
- (void)schedule:(unsigned char)a0;
- (void)WFLog:(unsigned long long)a0 privacy:(unsigned long long)a1 message:(const char *)a2 valist:(char *)a3;
- (void)WFLog:(unsigned long long)a0 privacy:(unsigned long long)a1 cfStrMsg:(struct __CFString { } *)a2;
- (id)getLogLifespanInDays;
- (void)setLogLifespanInDays:(id)a0;
- (unsigned long long)getLogPrivacy;
- (void)setLogPrivacy:(unsigned long long)a0;
- (unsigned long long)getLogLevelEnable;
- (void)setLogLevelEnable:(unsigned long long)a0;
- (unsigned long long)getLogLevelPersist;
- (void)setLogLevelPersist:(unsigned long long)a0;
- (unsigned long long)getMaxFileSizeInMB;
- (void)stopWatchingLogFile;
- (id)initWithFilePath:(id)a0 filePath:(struct __CFString { } *)a1 runLoopRef:(struct __CFRunLoop { } *)a2 runLoopMode:(struct __CFString { } *)a3 classC:(unsigned char)a4 dateFormatter:(struct __CFDateFormatter { } *)a5 maxFileSizeInMB:(unsigned long long)a6 logLifespanInDays:(unsigned long long)a7 dispatchQueue:(id)a8;
- (id)initWithDirectoryPath:(id)a0 dirPath:(struct __CFString { } *)a1 fileNamePrefix:(struct __CFString { } *)a2 runLoopRef:(struct __CFRunLoop { } *)a3 runLoopMode:(struct __CFString { } *)a4 classC:(unsigned char)a5 dateFormatter:(struct __CFDateFormatter { } *)a6 maxFileSizeInMB:(unsigned long long)a7 logLifespanInDays:(unsigned long long)a8 dispatchQueue:(id)a9;
- (unsigned char)checkLogFileUpdate:(struct __CFString { } *)a0;
- (struct __CFString { } *)changeLogFile:(unsigned char)a0;
- (void)writeToFile:(unsigned long long)a0 cfStrMsg:(struct __CFString { } *)a1;
- (void)init:(id)a0 runLoopRef:(struct __CFRunLoop { } *)a1 runLoopMode:(struct __CFString { } *)a2 classC:(unsigned char)a3 dateFormatter:(struct __CFDateFormatter { } *)a4 maxFileSizeInMB:(unsigned long long)a5 logLifespanInDays:(unsigned long long)a6;
- (struct __CFString { } *)createDateString;
- (unsigned char)doesLogFileExist:(struct __CFString { } *)a0;
- (struct __CFString { } *)generateLogFileName;
- (void)rotateLogFile:(struct __CFString { } *)a0;
- (void)createLogFile:(struct __CFString { } *)a0 fileClassC:(unsigned char)a1;
- (void)removeLogFilesFromDir:(const char *)a0;
- (void)removeLogFile:(const char *)a0 maxAge:(double)a1;
- (void)startWatchingLogFile;
- (void)cleanStaleLogs;
- (id)mapLogLevelEnum:(unsigned long long)a0;
- (void)setMaxFileSizeInMB:(unsigned long long)a0;

@end
