@class NSString, CSKeywordAnalyzerNDEAPI, NSMutableData, CSShadowMicScoreCreator;
@protocol CSPhraseNDEAPIScorerDelegate;

@interface CSPhraseNDEAPIScorer : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate>

@property (retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI;
@property (nonatomic) BOOL hasReceivedNDEAPIResult;
@property (retain, nonatomic) CSShadowMicScoreCreator *shadowMicScoreCreator;
@property (retain, nonatomic) NSMutableData *dataBufferNDEAPI;
@property (nonatomic) unsigned long long dataBufferPositionNDEAPI;
@property (nonatomic) unsigned char hasReceivedEarlyDetectNDEAPIResult;
@property (weak, nonatomic) id<CSPhraseNDEAPIScorerDelegate> delegate;
@property (readonly, nonatomic) float shadowMicScoreThresholdForVAD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (void)keywordAnalyzerNDEAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (double)currentShadowMicScore;
- (id)initWithAsset:(id)a0 assetConfig:(id)a1 firstPassSource:(unsigned long long)a2 activeChannel:(unsigned long long)a3 siriLanguage:(id)a4 shouldEnableShadowMicScore:(BOOL)a5;
- (void)processAudioChunk:(id)a0 activeChannel:(unsigned long long)a1;

@end
