@class TPLayoutState, TPUIState, TPArchivedUIState, TPArchivedLayoutState;

@interface TPViewStateRoot : TSKViewStateRoot {
    TPArchivedLayoutState *_archivedLayoutState;
    TPArchivedUIState *_archivedUIState;
}

@property (copy, nonatomic) TPLayoutState *layoutState;
@property (copy, nonatomic) TPUIState *uiState;

- (BOOL)isEqual:(id)a0;
- (id)initWithContext:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 layoutState:(id)a1 uiState:(id)a2;
- (BOOL)isEqualToViewStateRoot:(id)a0;

@end
