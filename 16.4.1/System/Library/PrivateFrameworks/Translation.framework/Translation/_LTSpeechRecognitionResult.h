@class _LTSpeechRecognitionSausage, NSString, NSArray, NSLocale;

@interface _LTSpeechRecognitionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isFinal) BOOL final;
@property (nonatomic, getter=isStable) BOOL stable;
@property (retain, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSArray *transcriptions;
@property (retain, nonatomic) _LTSpeechRecognitionSausage *bestRecognitionAlternatives;

+ (id)emptyResultWithLocale:(id)a0 isFinal:(BOOL)a1;
+ (id)resultWithPackage:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(BOOL)a3;
+ (id)resultWithResult:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(BOOL)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)bestTranscription;
- (id)_transcriptionWithResult:(id)a0 locale:(id)a1;
- (id)initEmptyResultWithLocale:(id)a0 isFinal:(BOOL)a1;
- (id)initWithOspreyPartialRecognitionResponse:(id)a0 isSanitized:(BOOL)a1;
- (id)initWithOspreyResponse:(id)a0 confidenceThreshold:(long long)a1 isSanitized:(BOOL)a2;
- (id)initWithPackage:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(BOOL)a3;
- (id)initWithResult:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(BOOL)a3;

@end
