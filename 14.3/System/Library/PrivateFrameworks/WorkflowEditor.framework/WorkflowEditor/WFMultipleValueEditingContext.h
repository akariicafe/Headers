@class WFListEditorUpdateItem, WFVariableEditingContext;

@interface WFMultipleValueEditingContext : NSObject

@property (retain, nonatomic) WFVariableEditingContext *variableContext;
@property (retain, nonatomic) WFListEditorUpdateItem *updateItem;

- (void).cxx_destruct;

@end
