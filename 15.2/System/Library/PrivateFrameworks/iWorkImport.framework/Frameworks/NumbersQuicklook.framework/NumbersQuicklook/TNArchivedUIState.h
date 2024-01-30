@class TNUIState;

@interface TNArchivedUIState : TSKViewStateRoot

@property (readonly, nonatomic) TNUIState *uiState;

- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithUIState:(id)a0 context:(id)a1;

@end
