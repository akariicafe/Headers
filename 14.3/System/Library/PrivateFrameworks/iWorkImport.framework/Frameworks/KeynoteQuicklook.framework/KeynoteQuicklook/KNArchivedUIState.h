@class KNUIState;

@interface KNArchivedUIState : TSPObject

@property (readonly, nonatomic) KNUIState *uiState;

- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithUIState:(id)a0 context:(id)a1;
- (BOOL)p_validateViewStateWithDocumentRoot:(id)a0 documentRevision:(id)a1;
- (BOOL)validateMobileViewStateWithDocumentRoot:(id)a0 documentRevision:(id)a1;
- (BOOL)validateDesktopViewStateWithDocumentRoot:(id)a0 documentRevision:(id)a1;

@end
