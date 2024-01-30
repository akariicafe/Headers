@class TIMecabraWrapper, TILanguageModelAdaptationContext;

@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;
@property (copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext;

- (void)perform;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithWordSearch:(id)a0 adaptationContext:(id)a1;

@end
