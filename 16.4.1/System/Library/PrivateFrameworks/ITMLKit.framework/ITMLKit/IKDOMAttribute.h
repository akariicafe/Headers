@class NSString, IKDOMNode;

@interface IKDOMAttribute : IKDOMNode <IKJSDOMAttribute>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) IKDOMNode *ownerElement;

- (BOOL)dispatchEvent:(id)a0;
- (long long)nodeType;
- (id)previousSibling;
- (id)childNodes;
- (id)firstChild;
- (id)lastChild;
- (id)removeChild:(id)a0;
- (id)textContent;
- (id)appendChild:(id)a0;
- (BOOL)hasChildNodes;
- (id)nextSibling;
- (id)nodeName;
- (id)nodeValue;
- (void)addEventListener:(id)a0 :(id)a1 :(BOOL)a2;
- (id)cloneNode:(BOOL)a0;
- (id)insertBefore:(id)a0 :(id)a1;
- (void)removeEventListener:(id)a0 :(id)a1 :(BOOL)a2;
- (id)replaceChild:(id)a0 :(id)a1;
- (id)getFeature:(id)a0 :(id)a1;
- (id)initWithAppContext:(id)a0 xmlNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;

@end
