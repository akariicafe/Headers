@class AFSpeechLatticeMitigatorResult, AFSpeechRecognition, AFSpeechAudioAnalytics;

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AFSpeechRecognition *recognition;
@property (readonly, nonatomic) AFSpeechRecognition *unfilteredRecognition;
@property (readonly, nonatomic) AFSpeechRecognition *rawRecognition;
@property (readonly, nonatomic) AFSpeechAudioAnalytics *audioAnalytics;
@property (readonly, nonatomic) BOOL isFinal;
@property (readonly, nonatomic) double utteranceStart;
@property (readonly, nonatomic) AFSpeechLatticeMitigatorResult *latticeMitigatorResult;
@property (readonly, nonatomic) BOOL recognitionPaused;
@property (readonly, nonatomic) BOOL speechProfileUsed;
@property (readonly, nonatomic) long long resultCandidateId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRecognition:(id)a0 rawRecognition:(id)a1 audioAnalytics:(id)a2 isFinal:(BOOL)a3 utteranceStart:(double)a4;
- (id)initWithRecognition:(id)a0 rawRecognition:(id)a1 audioAnalytics:(id)a2 isFinal:(BOOL)a3 utteranceStart:(double)a4 latticeMitigatorResult:(id)a5;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(BOOL)a4 utteranceStart:(double)a5;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(BOOL)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(BOOL)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6 recognitionPaused:(BOOL)a7;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(BOOL)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6 recognitionPaused:(BOOL)a7 speechProfileUsed:(BOOL)a8;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(BOOL)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6 recognitionPaused:(BOOL)a7 speechProfileUsed:(BOOL)a8 resultCandidateId:(long long)a9;

@end
