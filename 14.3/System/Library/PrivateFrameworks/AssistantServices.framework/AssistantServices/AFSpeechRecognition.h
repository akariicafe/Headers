@class NSArray;

@interface AFSpeechRecognition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *phrases;
@property (readonly, copy, nonatomic) NSArray *utterances;

+ (id)fakeOneBestFromPhrases:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhrases:(id)a0;
- (id)aceRecognition;
- (id)initWithPhrases:(id)a0 utterances:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
