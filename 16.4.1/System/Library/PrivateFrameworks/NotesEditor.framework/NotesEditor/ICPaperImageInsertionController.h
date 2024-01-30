@class ICNoteEditorViewController;

@interface ICPaperImageInsertionController : NSObject

@property (weak, nonatomic) ICNoteEditorViewController *noteEditor;

- (void).cxx_destruct;
- (void)addImagesToPaperWithItemProviders:(id)a0;
- (id)initWithNoteEditorViewController:(id)a0;
- (BOOL)shouldAddImagesToPaper;

@end
