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

- (void)setDraggable:(BOOL)a0;
- (int)scrollYOffset;
- (void)setScrollXOffset:(int)a0 scrollYOffset:(int)a1;
- (int)scrollXOffset;
- (BOOL)hidden;
- (void)click;
- (BOOL)draggable;
- (void)setHidden:(BOOL)a0;
- (BOOL)autocorrect;
- (void)setScrollXOffset:(int)a0 scrollYOffset:(int)a1 adjustForIOSCaret:(BOOL)a2;
- (void)absolutePosition:(int *)a0 :(int *)a1 :(int *)a2 :(int *)a3;
- (BOOL)translate;
- (void)setTranslate:(BOOL)a0;
- (id)webkitdropzone;
- (void)setWebkitdropzone:(id)a0;
- (BOOL)spellcheck;
- (void)setSpellcheck:(BOOL)a0;
- (id)insertAdjacentElement:(id)a0 element:(id)a1;
- (void)insertAdjacentHTML:(id)a0 html:(id)a1;
- (void)insertAdjacentText:(id)a0 text:(id)a1;
- (void)setAutocorrect:(BOOL)a0;
- (id)autocapitalize;
- (void)setAutocapitalize:(id)a0;
- (int)structuralComplexityContribution;

@end
