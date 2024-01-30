@class CHRecognizer;

@interface CHJapaneseTokenizationAndConversionStep : CHPostprocessingStep

@property (readonly, nonatomic) struct __Mecabra { } *mecabra;
@property (readonly, nonatomic) struct __MecabraContext { } *mecabraContextRef;
@property (readonly, nonatomic) CHRecognizer *recognizer;
@property (readonly, nonatomic) void *languageModel;
@property (readonly, nonatomic) BOOL promoteKanaConversion;

- (id)process:(id)a0;
- (void)dealloc;
- (id)initWithMecabra:(struct __Mecabra { } *)a0 recognizer:(id)a1 languageModel:(void *)a2 promoteKanaConversion:(BOOL)a3;
- (id)_extendedConversionCandidates:(id)a0 withPhraseCandidates:(id)a1;
- (id)_updatedTokenFromToken:(id)a0 withString:(id)a1;

@end
