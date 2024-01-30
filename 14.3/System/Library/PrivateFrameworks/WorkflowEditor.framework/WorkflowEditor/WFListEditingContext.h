@class WFListEditorUpdateItem, WFVariableEditingContext;

@interface WFListEditingContext : NSObject

@property (retain, nonatomic) WFVariableEditingContext *variableContext;
@property (retain, nonatomic) WFListEditorUpdateItem *updateItem;
@property (nonatomic) BOOL key;
@property (nonatomic) BOOL nested;

- (void).cxx_destruct;

@end
