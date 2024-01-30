@class NSString, DOMHTMLCollection;

@interface DOMHTMLElement : DOMElement

@property (copy) NSString *title;
@property (copy) NSString *lang;
@property (copy) NSString *dir;
@property int tabIndex;
@property (copy) NSString *accessKey;
@property (copy) NSString *innerText;
@property (copy) NSString *outerText;
@property (copy) NSString *contentEditable;
@property (readonly) BOOL isContentEditable;
@property (copy) NSString *idName;
@property (readonly) DOMHTMLCollection *children;
@property (readonly, copy) NSString *titleDisplayString;

- (int)scrollYOffset;
- (void)setHidden:(BOOL)a0;
- (void)setDraggable:(BOOL)a0;
- (int)scrollXOffset;
- (BOOL)hidden;
- (void)setScrollXOffset:(int)a0 scrollYOffset:(int)a1;
- (BOOL)autocorrect;
- (BOOL)draggable;
- (void)click;
- (BOOL)translate;
- (void)setAutocorrect:(BOOL)a0;
- (void)absolutePosition:(int *)a0 :(int *)a1 :(int *)a2 :(int *)a3;
- (id)autocapitalize;
- (id)insertAdjacentElement:(id)a0 element:(id)a1;
- (void)insertAdjacentHTML:(id)a0 html:(id)a1;
- (void)insertAdjacentText:(id)a0 text:(id)a1;
- (void)setAutocapitalize:(id)a0;
- (void)setScrollXOffset:(int)a0 scrollYOffset:(int)a1 adjustForIOSCaret:(BOOL)a2;
- (void)setSpellcheck:(BOOL)a0;
- (void)setTranslate:(BOOL)a0;
- (void)setWebkitdropzone:(id)a0;
- (BOOL)spellcheck;
- (int)structuralComplexityContribution;
- (id)webkitdropzone;

@end
