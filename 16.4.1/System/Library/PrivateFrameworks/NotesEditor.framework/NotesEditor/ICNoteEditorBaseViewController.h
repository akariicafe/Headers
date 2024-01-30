@class ICNote, NSString;

@interface ICNoteEditorBaseViewController : ICScrollViewDelegateViewController

@property (nonatomic) long long viewAppearanceState;
@property (readonly, nonatomic) long long editorIdentifier;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic, getter=isAuxiliaryEditor) BOOL auxiliaryEditor;
@property (readonly, nonatomic, getter=isEditingOnSecureScreen) BOOL editingOnSecureScreen;
@property (readonly, nonatomic, getter=isEditingOnSystemPaper) BOOL editingOnSystemPaper;
@property (retain, nonatomic) ICNote *note;
@property (readonly, nonatomic) NSString *identifierDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithIdentifier:(long long)a0 options:(unsigned long long)a1;
- (void)noteWillAppear:(id)a0;
- (void)groupActivityDidChange;
- (id)initWithIdentifier:(long long)a0 options:(unsigned long long)a1 nibName:(id)a2 bundle:(id)a3;
- (void)noteDidAppear:(id)a0;
- (void)noteDidDisappear:(id)a0;
- (void)noteWillDisappear:(id)a0;

@end
