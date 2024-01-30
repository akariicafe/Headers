@class NSString, IKDOMNode;

@interface IKDOMAttribute : IKDOMNode <IKJSDOMAttribute>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) IKDOMNode *ownerElement;

- (long long)nodeType;
- (BOOL)dispatchEvent:(id)a0;
- (id)childNodes;
- (id)previousSibling;
- (id)appendChild:(id)a0;
- (BOOL)hasChildNodes;
- (id)nodeName;
- (id)lastChild;
- (id)textContent;
- (id)nodeValue;
- (id)firstChild;
- (id)removeChild:(id)a0;
- (id)nextSibling;
- (void)addEventListener:(id)a0 :(id)a1 :(BOOL)a2;
- (void)removeEventListener:(id)a0 :(id)a1 :(BOOL)a2;
- (id)cloneNode:(BOOL)a0;
- (id)insertBefore:(id)a0 :(id)a1;
- (id)replaceChild:(id)a0 :(id)a1;
- (id)initWithAppContext:(id)a0 xmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;
- (id)getFeature:(id)a0 :(id)a1;

@end
