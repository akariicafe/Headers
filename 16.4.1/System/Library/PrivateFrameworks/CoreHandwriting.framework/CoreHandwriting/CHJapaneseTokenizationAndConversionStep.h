@class CHMecabraWrapper, CHStringOVSChecker;

@interface CHJapaneseTokenizationAndConversionStep : CHPostprocessingStep

@property (readonly, nonatomic) CHMecabraWrapper *mecabraWrapper;
@property (readonly, nonatomic) struct __MecabraContext { } *mecabraContextRef;
@property (readonly, nonatomic) void *wordLanguageModel;
@property (readonly, nonatomic) BOOL promoteKanaConversion;
@property (retain, nonatomic) CHStringOVSChecker *ovsStringChecker;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_extendedConversionCandidates:(id)a0 withPhraseCandidates:(id)a1;
- (id)_updatedTokenFromToken:(id)a0 withString:(id)a1;
- (id)initWithMecabra:(id)a0 wordLanguageModel:(void *)a1 ovsStringChecker:(id)a2 promoteKanaConversion:(BOOL)a3;
- (id)process:(id)a0 options:(id)a1;

@end
