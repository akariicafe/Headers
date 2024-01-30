@class NSData;

@interface SGMatchedDetailsReader : NSObject {
    NSData *_matchDetails;
    long long _arrayCount;
    unsigned int *_phraseMatches;
}

@property (readonly, nonatomic) long long phraseCount;
@property (readonly, nonatomic) long long columnCount;

- (void).cxx_destruct;
- (BOOL)matchAtPhraseIndex:(long long)a0 columnIndex:(long long)a1;
- (id)initWithMatchedDetails:(id)a0;

@end
