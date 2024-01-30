@class NSSet;

@interface SIVisualLogger : NSObject {
    struct VZDestination { } *_fileDestination;
    struct VZDestination { } *_networkDestination;
}

@property (readonly, nonatomic) struct VZLogger { } *internalVisualLoggerRef;
@property (readonly, nonatomic) NSSet *registeredSubloggers;

+ (id)sharedLogger;
+ (id)frameworkPrefix;
+ (id)_registerSubloggers;
+ (id)defaultLogPath;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_disableAllLogs;
- (BOOL)logIOSurface:(struct __IOSurface { } *)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (id)_arrayOfNumbersToData:(id)a0 valueType:(unsigned long long *)a1;
- (BOOL)_stopLoggingToFile;
- (BOOL)_stopLoggingToHost;
- (struct Ref<const VZDataInfo *> { struct shared_ptr<const void> { void *x0; struct __shared_weak_count *x1; } x0; })createDataInfoAt:(double)a0 name:(id)a1;
- (void)enableLogger:(id)a0;
- (BOOL)isLoggerEnabled:(id)a0;
- (void)logAndReleaseError:(struct __CFError { } *)a0;
- (BOOL)logBinaryData:(id)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (BOOL)logDictionary:(id)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (BOOL)logNumbers:(id)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (BOOL)logPixelBuffer:(struct __CVBuffer { } *)a0 at:(double)a1 sublogger:(id)a2 name:(id)a3;
- (BOOL)startLoggingToFile:(id)a0;
- (BOOL)startLoggingToFile:(id)a0 synchronously:(BOOL)a1;
- (BOOL)startLoggingToHost:(id)a0;
- (BOOL)stopAndDisableLogging;

@end
