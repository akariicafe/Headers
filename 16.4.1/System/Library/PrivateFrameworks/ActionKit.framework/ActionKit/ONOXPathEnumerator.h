@class ONOXMLDocument;

@interface ONOXPathEnumerator : NSEnumerator <NSFastEnumeration>

@property (nonatomic) struct _xmlXPathObject { int x0; struct _xmlNodeSet *x1; int x2; double x3; char *x4; void *x5; int x6; void *x7; int x8; } *xmlXPath;
@property (nonatomic) unsigned long long cursor;
@property (retain, nonatomic) ONOXMLDocument *document;

- (id)nextObject;
- (void)dealloc;
- (id)objectAtIndex:(long long)a0;
- (id)allObjects;
- (void).cxx_destruct;

@end
