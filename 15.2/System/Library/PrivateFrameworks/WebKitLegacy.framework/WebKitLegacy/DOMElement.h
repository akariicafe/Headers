@class NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode

@property (readonly, copy) NSString *tagName;
@property (readonly) DOMCSSStyleDeclaration *style;
@property (readonly) int offsetLeft;
@property (readonly) int offsetTop;
@property (readonly) int offsetWidth;
@property (readonly) int offsetHeight;
@property (readonly) int clientLeft;
@property (readonly) int clientTop;
@property (readonly) int clientWidth;
@property (readonly) int clientHeight;
@property int scrollLeft;
@property int scrollTop;
@property (readonly) int scrollWidth;
@property (readonly) int scrollHeight;
@property (readonly) DOMElement *offsetParent;
@property (copy) NSString *innerHTML;
@property (copy) NSString *outerHTML;
@property (copy) NSString *className;
@property (readonly, copy) NSString *innerText;
@property (readonly) DOMElement *previousElementSibling;
@property (readonly) DOMElement *nextElementSibling;
@property (readonly) DOMElement *firstElementChild;
@property (readonly) DOMElement *lastElementChild;
@property (readonly) unsigned int childElementCount;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsInRootViewSpace;

+ (id)_DOMElementFromJSContext:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1;

- (struct __CTFont { } *)_font;
- (void)blur;
- (void)focus;
- (BOOL)matches:(id)a0;
- (void)remove;
- (id)children;
- (BOOL)hasAttribute:(id)a0;
- (id)getAttribute:(id)a0;
- (id)getElementsByTagName:(id)a0;
- (void)setAttribute:(id)a0 value:(id)a1;
- (id)closest:(id)a0;
- (BOOL)isFocused;
- (void)removeAttribute:(id)a0;
- (id)_getURLAttribute:(id)a0;
- (id)getElementsByTagNameNS:(id)a0 localName:(id)a1;
- (id)getElementsByClassName:(id)a0;
- (id)querySelector:(id)a0;
- (id)querySelectorAll:(id)a0;
- (id)getElementsByTagNameNS:(id)a0 :(id)a1;
- (id)classList;
- (id)uiactions;
- (void)setUiactions:(id)a0;
- (id)getAttributeNode:(id)a0;
- (id)setAttributeNode:(id)a0;
- (id)removeAttributeNode:(id)a0;
- (id)getAttributeNS:(id)a0 localName:(id)a1;
- (void)setAttributeNS:(id)a0 qualifiedName:(id)a1 value:(id)a2;
- (void)removeAttributeNS:(id)a0 localName:(id)a1;
- (id)getAttributeNodeNS:(id)a0 localName:(id)a1;
- (id)setAttributeNodeNS:(id)a0;
- (BOOL)hasAttributeNS:(id)a0 localName:(id)a1;
- (void)scrollIntoView:(BOOL)a0;
- (void)scrollIntoViewIfNeeded:(BOOL)a0;
- (void)scrollByLines:(int)a0;
- (void)scrollByPages:(int)a0;
- (BOOL)webkitMatchesSelector:(id)a0;
- (void)webkitRequestFullScreen:(unsigned short)a0;
- (void)webkitRequestFullscreen;
- (void)setAttribute:(id)a0 :(id)a1;
- (id)getAttributeNS:(id)a0 :(id)a1;
- (void)setAttributeNS:(id)a0 :(id)a1 :(id)a2;
- (void)removeAttributeNS:(id)a0 :(id)a1;
- (id)getAttributeNodeNS:(id)a0 :(id)a1;
- (BOOL)hasAttributeNS:(id)a0 :(id)a1;
- (int)structuralComplexityContribution;

@end
