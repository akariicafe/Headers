@class CSPlainAudioFileWriter, NSHashTable, NSString, NSMutableDictionary, CSAudioCircularBuffer, NSObject, CSPolicy, CSAudioStream;
@protocol OS_dispatch_queue;

@interface CSContinuousAudioFingerprintProvider : NSObject <CSAudioStreamProvidingDelegate, CSAudioServerCrashMonitorDelegate>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isListenPollingStarting;
@property (retain, nonatomic) CSAudioCircularBuffer *audioLoggingBuffer;
@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter;
@property (retain, nonatomic) NSMutableDictionary *inUseServices;
@property (nonatomic) float currentMaximumBufferSize;
@property (retain, nonatomic) CSPolicy *enablePolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)_startListenWithCompletion:(id /* block */)a0;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)registerObserver:(id)a0;
- (void)_stopListening;
- (void)unregisterObserver:(id)a0;
- (void)audioStreamProvider:(id)a0 didHardwareConfigurationChange:(long long)a1;
- (id)init;
- (void)_startListenPollingWithInterval:(double)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectly:(long long)a1;
- (void)reset;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)_handleEnablePolicyEvent:(BOOL)a0;
- (void)_setMaximumBufferSizeFromInUseServices;
- (void)_startListenPolling;
- (void)startWithUUID:(id)a0 withMaximumBufferSize:(float)a1;
- (void)stopWithUUID:(id)a0;

@end
