@class _EARSpeechRecognition, _EARAudioAnalytics, _EARLatticeMitigatorResult, NSArray;

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying>

@property (nonatomic) BOOL isFinal;
@property (readonly, copy, nonatomic) _EARSpeechRecognition *recognition;
@property (readonly, copy, nonatomic) _EARSpeechRecognition *preITNRecognition;
@property (readonly, copy, nonatomic) _EARSpeechRecognition *unrepairedRecognition;
@property (readonly, nonatomic) BOOL recognitionIsFormatted;
@property (readonly, copy, nonatomic) _EARAudioAnalytics *audioAnalytics;
@property (readonly, nonatomic) double utteranceStart;
@property (readonly, copy, nonatomic) _EARLatticeMitigatorResult *latticeMitigatorResult;
@property (readonly, copy, nonatomic) NSArray *correctPartialResultIndexList;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nBestResults;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4 audioAnalytics:(id)a5 utteranceStart:(double)a6;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4 audioAnalytics:(id)a5 utteranceStart:(double)a6 latticeMitigatorResult:(id)a7;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4 audioAnalytics:(id)a5;
- (void)setCorrectPartialResultIndexList:(const void *)a0 oneBestFinalResult:(const void *)a1 partialResultIndexOffset:(int)a2;

@end
