@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView

@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView;

- (void)selectAll:(id)a0;
- (void)select:(id)a0;
- (BOOL)supportsTextReplacement;
- (void)toggleBoldface:(id)a0;
- (void)toggleItalics:(id)a0;
- (void)toggleUnderline:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)paste:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)findInteraction:(id)a0 didBeginFindSession:(id)a1;
- (void)findInteraction:(id)a0 didEndFindSession:(id)a1;
- (void)calloutOptionInvoked:(long long)a0 sender:(id)a1;
- (void)ic_evaluateJavaScript:(id)a0;
- (void)strikethrough:(id)a0;

@end
