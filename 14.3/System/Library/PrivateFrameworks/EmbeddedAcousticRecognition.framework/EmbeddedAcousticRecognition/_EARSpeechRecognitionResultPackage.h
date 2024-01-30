@class _EARSpeechRecognition, _EARAudioAnalytics, _EARLatticeMitigatorResult;

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) _EARSpeechRecognition *recognition;
@property (readonly, copy, nonatomic) _EARSpeechRecognition *preITNRecognition;
@property (readonly, nonatomic) BOOL recognitionIsFormatted;
@property (readonly, nonatomic) BOOL isFinal;
@property (readonly, copy, nonatomic) _EARAudioAnalytics *audioAnalytics;
@property (readonly, nonatomic) double utteranceStart;
@property (readonly, copy, nonatomic) _EARLatticeMitigatorResult *latticeMitigatorResult;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nBestResults;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 recognitionIsFormatted:(BOOL)a2 isFinal:(BOOL)a3 audioAnalytics:(id)a4 utteranceStart:(double)a5;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 recognitionIsFormatted:(BOOL)a2 isFinal:(BOOL)a3 audioAnalytics:(id)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 recognitionIsFormatted:(BOOL)a2 isFinal:(BOOL)a3;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 recognitionIsFormatted:(BOOL)a2 isFinal:(BOOL)a3 audioAnalytics:(id)a4;

@end
