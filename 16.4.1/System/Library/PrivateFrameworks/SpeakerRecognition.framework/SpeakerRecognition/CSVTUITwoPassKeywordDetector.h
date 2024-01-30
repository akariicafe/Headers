@class CSKeywordAnalyzerNDAPI, CSKeywordAnalyzerNDAPIResult, CSPhraseDetector, CSAudioCircularBuffer;

@interface CSVTUITwoPassKeywordDetector : CSVTUIKeywordDetector {
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    CSPhraseDetector *_phraseDetector;
    float _keywordThreshold;
    CSAudioCircularBuffer *_audioBuffer;
    unsigned long long _extraSamplesAtStart;
    unsigned long long _analyzerTrailingSamples;
    BOOL _isFirstPassTriggered;
    CSKeywordAnalyzerNDAPIResult *_firstPassResult;
}

- (id)initWithAsset:(id)a0;
- (id)analyze:(id)a0;
- (unsigned long long)_sampleLengthFrom:(unsigned int)a0 To:(unsigned int)a1;
- (void).cxx_destruct;
- (void)reset;
- (id)triggeredUtterance:(id)a0;

@end
