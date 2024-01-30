@class NotesBackgroundView, NSArray, NSString, NoteObject, NoteContentLayer, ICSearchResult;

@interface NotePreviewController : UIViewController <UITextViewDelegate, NoteContentLayerAttachmentPresentationDelegate, ICNotePreviewing>

@property (readonly, nonatomic) NotesBackgroundView *backgroundView;
@property (retain, nonatomic) NoteContentLayer *contentLayer;
@property (retain, nonatomic) NoteObject *note;
@property (retain, nonatomic) ICSearchResult *searchResult;
@property (retain, nonatomic) NSArray *attachmentPresentations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setupPreview;
- (id)attachmentContentIDs;
- (id)attachmentPresentationForContentID:(id)a0;
- (id)initWithNote:(id)a0;
- (id)initWithNote:(id)a0 searchResult:(id)a1;
- (id)noteContentLayer:(id)a0 attachmentPresentationForContentID:(id)a1;
- (id)noteContentLayer:(id)a0 fileURLForAttachmentWithContentID:(id)a1;
- (void)setupPreviewWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateForceLightContentIfNecessary;

@end
