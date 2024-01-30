@class NSLocale;

@interface CRCtcBeamSearch : NSObject

@property (nonatomic) struct _LXLexicon { } *dynamicLexicon;
@property (readonly, nonatomic) NSLocale *locale;

- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)kBestPathsForInput:(id)a0 k:(unsigned long long)a1 beamWidth:(unsigned long long)a2 outputProbs:(id *)a3 outputWhitespaceRanges:(id *)a4 error:(id *)a5;

@end
