@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface PLCoreDataFileRecorder : NSObject {
    NSMutableDictionary *_observationCountByStatementSQL;
    NSMutableDictionary *_observationCountByBacktraceHash;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observationsLock;
    NSObject<OS_dispatch_io> *_file;
    NSObject<OS_dispatch_queue> *_writingQueue;
}

+ (void)_writeRecordingPostambleUsingQueue:(id)a0 toFile:(id)a1;
+ (void)_writeEntries:(id)a0 toFile:(id)a1 usingQueue:(id)a2;
+ (id)_chooseFileURLFromFileURL:(id)a0;
+ (unsigned long long)_callStackHash;
+ (id)_jsonFragmentFromEntry:(id)a0;

- (BOOL)stopRecording;
- (id)init;
- (void).cxx_destruct;
- (void)_reconsiderRecordingState;
- (void)_decorateEntry:(id)a0;
- (BOOL)startRecordingToFileURL:(id)a0 withTag:(id)a1;
- (void)_installSignalHandler;

@end
