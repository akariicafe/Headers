@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *interpretations;
@property (nonatomic) BOOL isLowConfidence;

- (void).cxx_destruct;
- (id)firstInterpretation;
- (id)allInterpretationStringsAndScores;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)bestInterpretation;
- (id)initWithInterpretations:(id)a0 isLowConfidence:(BOOL)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
