@class NSArray;

@interface TIWordSearchChinesePhoneticOperationGetCandidates : TIWordSearchOperationGetCandidates

@property (readonly, nonatomic) NSArray *disambiguationCandidates;
@property (readonly, nonatomic) unsigned long long selectedDisambiguationCandidateIndex;

- (void).cxx_destruct;
- (id)initWithWordSearch:(id)a0 inputString:(id)a1 keyboardInput:(id)a2 segmentBreakIndex:(unsigned long long)a3 disambiguationCandidates:(id)a4 selectedDisambiguationCandidateIndex:(unsigned long long)a5 predictionEnabled:(BOOL)a6 reanalysisMode:(BOOL)a7 target:(id)a8 action:(SEL)a9 geometryModelData:(id)a10 hardwareKeyboardMode:(BOOL)a11 logger:(id)a12;

@end
