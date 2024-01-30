@class NSArray;

@interface CHMutableTokenizedTextResult : CHTokenizedTextResult

@property (copy, nonatomic) NSArray *tokenColumns;
@property (nonatomic) long long changeableTokenColumnCount;
@property (nonatomic) long long precedingLineBreaks;

+ (id)refineAlternativeTokens:(id)a0 historyTokenIDs:(id)a1 languageModel:(void *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)adjustColumns;
- (void)appendTokenColumns:(id)a0;
- (void)setTranscriptionPaths:(id)a0 scores:(id)a1;
- (void)trimTokensToTranscriptionPathCount:(long long)a0;
- (void)filterCandidatesWithOutOfPattern:(BOOL)a0 duplicateTokenIDs:(BOOL)a1 shouldKeepOriginalSpelling:(BOOL)a2;
- (void)setTokenColumns:(id)a0;
- (void)setPrecedingLineBreaks:(long long)a0;
- (id)commonStrokeSetsFromSets:(id)a0 tokenRow:(id)a1;
- (id)_columnStrokeSetsFromTokenRows:(id)a0;
- (void)setChangeableTokenColumnCount:(long long)a0;

@end
