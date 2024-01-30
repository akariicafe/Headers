@class NSObject, SNForwardPassAudioStreamAnalyzer, NSMutableDictionary, NSMutableArray, AVAudioFormat;
@protocol OS_dispatch_queue;

@interface SNAudioStreamAnalyzer : NSObject {
    NSMutableArray *_requests;
    AVAudioFormat *_currentFormat;
    NSObject<OS_dispatch_queue> *_analyzerQueue;
    SNForwardPassAudioStreamAnalyzer *_firstPassAnalyzer;
    NSMutableDictionary *_secondPassAnalyzers;
    struct unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer> > { struct __compressed_pair<AudioRingBuffer *, std::__1::default_delete<AudioRingBuffer> > { struct AudioRingBuffer *__value_; } __ptr_; } _ringBuffer;
    struct unique_ptr<CABufferList, std::__1::default_delete<CABufferList> > { struct __compressed_pair<CABufferList *, std::__1::default_delete<CABufferList> > { struct CABufferList *__value_; } __ptr_; } _ringBufferWriteBufferList;
}

+ (BOOL)shouldRecordSecondPass;
+ (id)secondPassRecordingPath;
+ (void)deleteWAVAndTextFilesCreatedBeforeLastWeekInDirectory:(id)a0;

- (id)detailedDescription;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithFormat:(id)a0;
- (void)removeAllRequests;
- (id).cxx_construct;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)analyzeAudioBuffer:(id)a0 atAudioFramePosition:(long long)a1;
- (void)_removeRequest:(id)a0;
- (void)sendErrorToAllRequests:(id)a0;
- (void)completeAnalysis;
- (BOOL)addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (void)writeDSPGraphDotFilesToDirectory:(id)a0;
- (void)removeRequestAsync:(id)a0;
- (BOOL)_addRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)_addTwoPassRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)_addSinglePassRequest:(id)a0 completionHandler:(id /* block */)a1 resultsHandler:(id /* block */)a2 error:(id *)a3;
- (void)handleBeginSecondPassForRequest:(id)a0 secondPassController:(id)a1 completionHandler:(id /* block */)a2 resultsHandler:(id /* block */)a3;
- (void)handleEndSecondPassForRequest:(id)a0;
- (void)_removeTwoPassRequest:(id)a0;
- (void)_removeSinglePassRequest:(id)a0;
- (void)_analyzeAudioBuffer:(id)a0 atAudioFramePosition:(long long)a1;

@end
