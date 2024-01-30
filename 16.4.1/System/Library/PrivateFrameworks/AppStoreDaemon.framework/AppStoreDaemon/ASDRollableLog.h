@class ASDLogFileOptions, NSFileHandle, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ASDRollableLog : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastFileStatTime;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_source> *_fileObserverSource;
    ASDLogFileOptions *_options;
}

@property (readonly) ASDLogFileOptions *logOptions;

- (void)writeString:(id)a0;
- (id)initWithLogOptions:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
