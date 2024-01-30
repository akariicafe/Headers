@class _EARFormatter, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _EARSyncSpeechRecognizer : NSObject {
    NSObject<OS_dispatch_queue> *_formatterQueue;
    _EARFormatter *_formatter;
    struct shared_ptr<quasar::SyncSpeechRecognizer> { struct SyncSpeechRecognizer *__ptr_; struct __shared_weak_count *__cntrl_; } _syncRecognizer;
    NSString *_configPath;
}

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)getSpeechRecognitionResultFromTokens:(struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void *x0; void *x1; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void *x0; } x2; })a0 taskName:(id)a1;
- (id)initWithConfiguration:(id)a0 memoryLock:(BOOL)a1;
- (void)resetWithSamplingRate:(unsigned int)a0 language:(id)a1 taskType:(id)a2 userId:(id)a3 sessionId:(id)a4 deviceId:(id)a5 farField:(BOOL)a6 audioSource:(id)a7 maxAudioBufferSizeSeconds:(unsigned int)a8;
- (id)resultsWithAddedAudio:(id)a0 numberOfSamples:(unsigned long long)a1 taskName:(id)a2;
- (id)resultsWithAddedFloatAudio:(id)a0 numberOfSamples:(unsigned long long)a1 taskName:(id)a2;
- (id)resultsWithEndedAudio;

@end
