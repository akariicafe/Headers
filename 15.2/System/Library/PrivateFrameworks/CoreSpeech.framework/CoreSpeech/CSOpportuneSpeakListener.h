@class CSPlainAudioFileWriter, CSAudioRecordContext, NSString, CSSPGEndpointAnalyzer, NSObject, NSMutableArray, CSAudioStream, CSAudioTimeConverter;
@protocol CSAudioSessionProviding, CSAudioStreamProviding, CSOpportuneSpeakListenerDelegate, OS_dispatch_queue;

@interface CSOpportuneSpeakListener : NSObject <CSAudioStreamProvidingDelegate, CSSPGEndpointAnalyzerDelegate>

@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) CSSPGEndpointAnalyzer *spgEndpointAnalyzer;
@property (nonatomic) int remoteVADSPGRatio;
@property (retain, nonatomic) id<CSAudioStreamProviding> audioStreamProvider;
@property (retain, nonatomic) id<CSAudioSessionProviding> audioSessionProvider;
@property (retain, nonatomic) CSAudioRecordContext *latestContext;
@property BOOL isMediaPlayingNow;
@property (retain, nonatomic) NSMutableArray *remoteVADAlignBuffer;
@property (nonatomic) unsigned long long remoteVADAlignCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *alignBufferQueue;
@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter;
@property (nonatomic) unsigned long long runningSampleCount;
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter;
@property (weak, nonatomic) id<CSOpportuneSpeakListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectly:(long long)a1;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_resetAlignBuffer;
- (void)_startRequestWithCompletion:(id /* block */)a0;
- (void)stopListenWithStateReset:(BOOL)a0 completion:(id /* block */)a1;
- (void)_addRemoteVADSignal:(BOOL)a0;
- (BOOL)_shouldReportBoron;
- (BOOL)_popRemoteVADSignal;
- (void)spgEndpointAnalyzer:(id)a0 hasSilenceScoreEstimate:(double)a1 clientProcessedAudioTimeMS:(float)a2;
- (void)startListenWithOption:(id)a0 completion:(id /* block */)a1;
- (void)stopListenWithCompletion:(id /* block */)a0;

@end
