@class NSString;

@interface TIWordSearchJapaneseOperationGetCandidates : TIWordSearchOperationGetCandidates

@property (copy, nonatomic) NSString *previousCacheKey;
@property (readonly, nonatomic) NSString *contextString;
@property (nonatomic) BOOL flickUsed;
@property (nonatomic) BOOL phraseBoundarySet;
@property (nonatomic) BOOL allowIncompleteRomaji;
@property (nonatomic) BOOL referenceMode;
@property (nonatomic) BOOL singlePhrase;

- (id)results;
- (void).cxx_destruct;
- (id)initWithWordSearch:(id)a0 inputString:(id)a1 contextString:(id)a2 segmentBreakIndex:(unsigned long long)a3 predictionEnabled:(BOOL)a4 reanalysisMode:(BOOL)a5 autocapitalizationType:(unsigned long long)a6 target:(id)a7 action:(SEL)a8 geometryModelData:(id)a9 flickUsed:(BOOL)a10 phraseBoundarySet:(BOOL)a11 hardwareKeyboardMode:(BOOL)a12 logger:(id)a13;
- (void)checkForCachedResultsIfNeeded;

@end
