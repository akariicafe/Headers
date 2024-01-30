@class TIMecabraWrapper, TILanguageModelAdaptationContext;

@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation

@property (retain, nonatomic) TIMecabraWrapper *mecabraWrapper;
@property (copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext;

- (void).cxx_destruct;
- (void)perform;
- (void)cancel;
- (id)initWithWordSearch:(id)a0 adaptationContext:(id)a1;

@end
