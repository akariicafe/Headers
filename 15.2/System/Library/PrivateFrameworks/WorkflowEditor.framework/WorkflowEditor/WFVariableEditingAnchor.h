@class WFVariable, WFParameter;
@protocol WFVariableProvider;

@interface WFVariableEditingAnchor : NSObject

@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, nonatomic) WFParameter *parameter;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithVariable:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

@end
