@class AVAudioFormat, NSString, NSURL, AXSDVoiceTriggerAssetManager, NSObject, SNAudioStreamAnalyzer;
@protocol OS_dispatch_queue, AXSDVoiceTriggerModelManagerDelegate;

@interface AXSDVoiceTriggerModelManager : NSObject <SNResultsObserving, AXSDVoiceTriggerAssetManagerDelegate> {
    SNAudioStreamAnalyzer *_streamAnalyzer;
    AVAudioFormat *_format;
    AXSDVoiceTriggerAssetManager *_assetManager;
    BOOL _startRequested;
    NSURL *_assetPath;
}

@property (weak, nonatomic) id<AXSDVoiceTriggerModelManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)_startListening;
- (void)stopListening;
- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (id)_readConfigFileWithError:(id *)a0;
- (void)_stopListeningWithError:(id)a0;
- (void)modelDidUpdate:(id)a0 assetVersion:(unsigned long long)a1 withError:(id)a2;
- (void)processAudioBuffer:(id)a0 atTime:(id)a1;
- (void)startListeningWithFormat:(id)a0;

@end
