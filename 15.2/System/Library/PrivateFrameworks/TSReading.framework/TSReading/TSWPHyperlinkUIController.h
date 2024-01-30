@class TSDRep, NSString, TSWPInteractiveCanvasController, TSWPEditingController, TSWPHyperlinkField, TSWPStorage, UIViewController, TSWPChangeSession;
@protocol TSWPHyperlinkHostRepProtocol;

@interface TSWPHyperlinkUIController : NSObject <TSWPStorageObserver, UIPopoverControllerDelegate, UITextFieldDelegate> {
    TSDRep<TSWPHyperlinkHostRepProtocol> *_hyperlinkRep;
    TSWPHyperlinkField *_hyperlinkField;
    TSWPStorage *_observedStorage;
    unsigned long long _hyperlinkUISessionID;
    TSWPEditingController *_cachedEditingController;
    TSWPChangeSession *_changeSession;
    NSString *_originalDisplayText;
    BOOL _removeHyperlink;
    BOOL _closingDocument;
}

@property (retain, nonatomic) NSString *editedDisplayText;
@property (retain, nonatomic) NSString *editedURLString;
@property (readonly, nonatomic) NSString *stringForURL;
@property (readonly, nonatomic) NSString *stringForDisplay;
@property (readonly, nonatomic) TSWPInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) UIViewController *viewControllerForPresenting;
@property (readonly, nonatomic) BOOL isCanvasInReadMode;
@property (readonly, nonatomic) TSWPEditingController *editingController;
@property (nonatomic) BOOL shouldMaintainKeyboardWhenEndingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHyperlinkUIController;
+ (id)defaultTableView;

- (void)visit;
- (void)dealloc;
- (void)endUISession;
- (void)setKeyboardSuppressedAndTextInputEditorIgnoresFirstResponderChanges:(BOOL)a0;
- (int)p_UIState;
- (void)hideHyperlinkHighlight;
- (void)p_stopObservingStorage;
- (void)storage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(int)a3;
- (void)startUISessionForHyperlinkField:(id)a0 inRep:(id)a1;
- (BOOL)hasOpenSessionForHyperlinkField:(id)a0;
- (BOOL)hasStartedSession;
- (void)showHyperlinkHighlight;
- (void)p_selectHyperlinkField;
- (void)p_clearTextSelection;
- (BOOL)isDisplayingHyperlinkUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_viewBoundsForField;
- (void)p_initChangeSessionAuthorCreatedWithCommand:(id *)a0;
- (BOOL)p_shouldSetCanvasSelectionWhenDismissing;
- (BOOL)p_shouldSetTextSelectionWhenDismissing;
- (void)i_openURLAction;

@end
