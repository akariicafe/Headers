@class WFParameter;

@interface WFParameterComponent : CKCompositeComponent

@property (class, readonly, nonatomic) BOOL editsMultipleValues;

@property (readonly, weak, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) id /* block */ updateBlock;

+ (id)newWithParameter:(id)a0 state:(id)a1 updateBlock:(id /* block */)a2 options:(struct WFParameterComponentOptions { BOOL x0; BOOL x1; BOOL x2; id x3; id x4; BOOL x5; long long x6; id x7; })a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 navigationContext:(id)a6 labelsToAlignTo:(id)a7;

@end
