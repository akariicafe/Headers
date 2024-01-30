@class NSArray;

@interface CHMutableTokenizedTextResult : CHTokenizedTextResult

@property (copy, nonatomic) NSArray *tokenColumns;
@property (nonatomic) long long changeableTokenColumnCount;
@property (nonatomic) long long precedingLineBreaks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)remapAllStrokeIndexesWithArray:(id)a0;
- (void)adjustColumns;
- (void)appendTokenColumns:(id)a0;
- (void)filterCandidatesWithOutOfPattern:(BOOL)a0 duplicateTokenIDs:(BOOL)a1 keepOutOfLexiconAlternatives:(BOOL)a2 keepAlternativeLengths:(BOOL)a3 keepSubstrings:(BOOL)a4 shouldKeepOriginalSpelling:(BOOL)a5;
- (void)offsetAllStrokeIndexesBy:(long long)a0;
- (void)prependTokenColumns:(id)a0 prefixTopPath:(id)a1;
- (void)setChangeableTokenColumnCount:(long long)a0;
- (void)setPrecedingLineBreaks:(long long)a0;
- (void)setTokenColumns:(id)a0;
- (void)setTranscriptionPaths:(id)a0 scores:(id)a1;
- (void)trimTokensToTranscriptionPathCount:(long long)a0;

@end
