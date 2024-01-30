@class TRIMLRuntimeEvaluation;

@interface TRIShadowEvaluation : TRIPBMessage

@property (readonly, nonatomic) int typeOneOfCase;
@property (retain, nonatomic) TRIMLRuntimeEvaluation *mlRuntime;

+ (id)descriptor;

@end
