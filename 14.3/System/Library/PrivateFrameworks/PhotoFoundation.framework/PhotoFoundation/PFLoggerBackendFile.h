@class NSDateFormatter, NSFileHandle;

@interface PFLoggerBackendFile : PFLoggerBackendAdapter {
    NSDateFormatter *_dateFormatter;
}

@property (retain) NSFileHandle *fileHandle;
@property BOOL shouldCloseFileHandle;
@property BOOL isStandardErrorFileBackend;

+ (id)backendsFromUserDefaultsWithLogLevel:(int)a0;
+ (id)standardErrorFileBackend;

- (void).cxx_destruct;
- (void)dealloc;
- (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 facility:(id)a1 subsystem:(id)a2 level:(int)a3 message:(id)a4 format:(id)a5 args:(char *)a6;
- (BOOL)outputsToDebuggerConsole;
- (id)initWithLogFileURL:(id)a0;
- (id)writeOpenFileAtURL:(id)a0;
- (id)initWithFileHandle:(id)a0;

@end
