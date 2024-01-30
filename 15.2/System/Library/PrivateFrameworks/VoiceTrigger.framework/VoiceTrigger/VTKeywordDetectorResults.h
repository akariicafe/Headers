@class VTKeywordDetectorPhraseScore, NSArray;

@interface VTKeywordDetectorResults : NSObject

@property (retain, nonatomic) VTKeywordDetectorPhraseScore *bestResult;
@property (retain, nonatomic) NSArray *nBestResults;

- (void).cxx_destruct;
- (id)initWithResultArray:(id)a0;
- (unsigned long long)_getBestResultIdx:(id)a0;

@end
