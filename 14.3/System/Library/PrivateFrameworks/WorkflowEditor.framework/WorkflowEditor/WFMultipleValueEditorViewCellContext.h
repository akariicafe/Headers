@class WFMultipleValueEditorViewCell;
@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;

@interface WFMultipleValueEditorViewCellContext : NSObject

@property (weak, nonatomic) WFMultipleValueEditorViewCell *cell;
@property (readonly, nonatomic) id<WFVariableProvider> variableProvider;
@property (readonly, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (readonly, nonatomic) id<WFComponentNavigationContext> navigationContext;

- (void).cxx_destruct;

@end
