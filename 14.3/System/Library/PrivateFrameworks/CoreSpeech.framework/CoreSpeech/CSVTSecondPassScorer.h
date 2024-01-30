@class NSDictionary, CSVTSecondPassPhraseScore;

@interface CSVTSecondPassScorer : NSObject

@property (retain, nonatomic) CSVTSecondPassPhraseScore *triggeredPhrase;
@property (retain, nonatomic) NSDictionary *phraseMap;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAsset:(id)a0 firstPassSource:(unsigned long long)a1;
- (id)dictionaryRepresentationWithSecondChanceEnabled:(BOOL)a0;
- (void)updateWithNdapiResults:(id)a0;
- (void)updateWithCtcCheckerResults:(id)a0;
- (id)getTriggeredPhraseWithSecondChanceEnabled:(BOOL)a0;
- (id)getNearMissPhraseWithSecondChanceEnabled:(BOOL)a0;
- (id)bestScoringPhrase;

@end
