@class WFVariable;

@interface WFVariableComponentPointerWrapper : NSObject

@property (readonly, nonatomic) WFVariable *variable;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithVariable:(id)a0;
- (unsigned long long)hash;

@end
