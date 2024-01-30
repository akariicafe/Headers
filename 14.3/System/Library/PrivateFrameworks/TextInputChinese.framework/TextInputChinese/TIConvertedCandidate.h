@class NSString, TIKeyboardCandidate, NSArray;

@interface TIConvertedCandidate : NSObject

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (copy, nonatomic) NSString *convertedInput;
@property (readonly, nonatomic) NSString *revertedInput;
@property (copy, nonatomic) NSString *replacedAmbiguousPinyinSyllable;
@property (copy, nonatomic) NSString *replacementUnambiguousPinyinSyllable;
@property (copy, nonatomic) NSArray *geometryData;
@property (copy, nonatomic) NSArray *touchData;

- (void).cxx_destruct;
- (id)initWithCandidate:(id)a0;
- (id)initWithCandidate:(id)a0 replacedAmbiguousPinyinSyllable:(id)a1 replacementUnambiguousPinyinSyllable:(id)a2 convertedInput:(id)a3;

@end
