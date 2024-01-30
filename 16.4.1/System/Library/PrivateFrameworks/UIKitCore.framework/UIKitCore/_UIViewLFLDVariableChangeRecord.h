@class NSISVariable, UIView;

@interface _UIViewLFLDVariableChangeRecord : _UIViewLFLDChangeRecord

@property (readonly, nonatomic) NSISVariable *variable;
@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) UIView *variableDelegate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0 inLayoutEngine:(id)a1;

@end
