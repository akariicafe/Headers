@class NSArray;

@interface AFSpeechRecognition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *phrases;
@property (readonly, copy, nonatomic) NSArray *utterances;
@property (readonly, nonatomic) double processedAudioDuration;

+ (id)fakeOneBestFromPhrases:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPhrases:(id)a0;
- (id)initWithPhrases:(id)a0 utterances:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhrases:(id)a0 utterances:(id)a1 processedAudioDuration:(double)a2;
- (id)aceRecognition;
- (id)dictionaryRepresentation;

@end
