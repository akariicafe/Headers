@class WFVariable;

@interface WFVariableEditingContext : NSObject

@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) BOOL editingVariable;

+ (id)newWithVariable:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 editingVariable:(BOOL)a2;

- (void).cxx_destruct;

@end
