@class WFVariable;

@interface WFVariableComponentPointerWrapper : NSObject

@property (readonly, nonatomic) WFVariable *variable;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithVariable:(id)a0;

@end
