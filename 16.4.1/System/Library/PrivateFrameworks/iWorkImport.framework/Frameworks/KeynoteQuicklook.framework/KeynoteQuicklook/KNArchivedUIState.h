@class KNUIState;

@interface KNArchivedUIState : TSKViewStateRoot

@property (readonly, nonatomic) KNUIState *uiState;

- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (id)initWithUIState:(id)a0 context:(id)a1;
- (void)loadFromUnarchiver:(id)a0;

@end
