@class NSString, NSMutableString, TIConvertedCandidate, NSMutableArray;

@interface TIConversionHistory : NSObject

@property (nonatomic) BOOL invalid;
@property (retain, nonatomic) NSMutableArray *convertedCandidates;
@property (retain, nonatomic) NSMutableArray *mutableConvertedCandidateRefs;
@property (retain, nonatomic) NSMutableString *mutableConvertedCandidateText;
@property (nonatomic) unsigned long long revertCount;
@property (nonatomic) BOOL inputChangedSinceLastConversion;
@property (readonly, nonatomic) NSString *convertedCandidateText;
@property (readonly, nonatomic) unsigned long long convertedLength;
@property (readonly, nonatomic) TIConvertedCandidate *lastConvertedCandidate;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)invalidate;
- (void)addCandidate:(id)a0 candidateRef:(id)a1 replacedAmbiguousPinyinSyllable:(id)a2 replacementUnambiguousPinyinSyllable:(id)a3 convertedInput:(id)a4;
- (void)didRevertLastConvertedCandidate;
- (BOOL)shouldRevertConvertedCandidateOnDeletionFromMarkedText:(id)a0;

@end
