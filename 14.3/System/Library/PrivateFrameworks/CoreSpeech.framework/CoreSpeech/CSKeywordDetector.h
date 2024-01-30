@class CSAsset, CSSpeechManager, CSKeywordAnalyzerQuasar, NSString, NSObject;
@protocol OS_dispatch_queue, CSVoiceTriggerDelegate;

@interface CSKeywordDetector : NSObject <CSKeywordAnalyzerQuasarScoreDelegate, CSSpeechManagerDelegate>

@property (weak, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerQuasar *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) unsigned long long analyzedSampleCount;
@property (nonatomic) unsigned long long decisionWaitSampleCount;
@property (nonatomic) BOOL isRunningRecognizer;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)setAsset:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)_setAsset:(id)a0;
- (void)keywordAnalyzerQuasar:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (id)initWithManager:(id)a0 asset:(id)a1;
- (void)startDetectKeyword:(id)a0;
- (void)speechManagerRecordBufferAvailable:(id)a0 buffer:(id)a1;
- (void)speechManagerLPCMRecordBufferAvailable:(id)a0 chunk:(id)a1;
- (void)speechManagerDidStartForwarding:(id)a0 successfully:(BOOL)a1 error:(id)a2;
- (void)speechManagerDidStopForwarding:(id)a0 forReason:(long long)a1;

@end
