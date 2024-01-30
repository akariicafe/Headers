@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView

@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView;

- (void)toggleBoldface:(id)a0;
- (void)select:(id)a0;
- (void)_showTextStyleOptions:(id)a0;
- (void)toggleItalics:(id)a0;
- (void)paste:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)selectAll:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)toggleUnderline:(id)a0;
- (void)strikethrough:(id)a0;
- (void)calloutOptionInvoked:(long long)a0 sender:(id)a1;
- (void)ic_evaluateJavaScript:(id)a0;

@end
