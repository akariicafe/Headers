@class NSArray;

@interface VTKeywordAnalyzerResults : NSObject

@property (nonatomic) unsigned long long detectorType;
@property (nonatomic) unsigned long long numPhraseResults;
@property (retain, nonatomic) NSArray *phraseScores;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
