@class NotesBackgroundView, ICTextView, ICNote, ICSearchResult, NSString, ICTextController;

@interface ICNotePreviewController : ICNAViewController <UITextViewDelegate, ICNotePreviewing>

@property (retain, nonatomic) ICTextView *textView;
@property (readonly, nonatomic) NotesBackgroundView *backgroundView;
@property (retain, nonatomic) ICTextController *textController;
@property (retain, nonatomic) ICNote *note;
@property (retain, nonatomic) ICSearchResult *searchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setupPreview;
- (id)initWithNote:(id)a0;
- (id)initWithNote:(id)a0 searchResult:(id)a1;
- (void)setupPreviewWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateForceLightContentIfNecessary;
- (void)addPasswordEntryViewController;
- (id)createTextViewUsingTextController:(id)a0 stylingTextUsingSeparateTextStorageForRendering:(BOOL)a1;
- (BOOL)isNotePasswordProtectedAndLocked;
- (void)scrollToSearchResultIfNeeded;
- (BOOL)shouldForceLightContent;

@end
