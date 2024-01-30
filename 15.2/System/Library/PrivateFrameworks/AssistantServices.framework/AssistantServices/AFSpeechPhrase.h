@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *interpretations;
@property (nonatomic) BOOL isLowConfidence;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)firstInterpretation;
- (id)allInterpretationStringsAndScores;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithInterpretations:(id)a0 isLowConfidence:(BOOL)a1;
- (id)bestInterpretation;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
