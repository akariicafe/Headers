@interface TSCH3DFixedFunctionShaderEffect : TSCH3DPhongLikeShaderEffect

- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)injectDiffuseToProgram:(id)a0;
- (void)injectFinalColorToProgram:(id)a0;

@end
