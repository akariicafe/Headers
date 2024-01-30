@class POXMLXPathContext, NSArray;

@interface POXMLXPathResult : NSObject

@property (nonatomic) struct _xmlXPathObject { int x0; struct _xmlNodeSet *x1; int x2; double x3; char *x4; void *x5; int x6; void *x7; int x8; } *xpathObj;
@property (retain, nonatomic) POXMLXPathContext *xpathContext;
@property (retain, nonatomic) NSArray *nodes;

- (int)nodeCount;
- (id)nodes;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
