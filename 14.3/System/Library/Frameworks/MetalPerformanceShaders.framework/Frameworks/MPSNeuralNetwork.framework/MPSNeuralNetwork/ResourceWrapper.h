@class NSString;

@interface ResourceWrapper : NSObject <NodeWrapper> {
    struct ResourceGraphNode { id x0; struct NodeList<FilterGraphNode *> { struct FilterGraphNode **x0; unsigned long long x1; unsigned long long x2; } x1; struct FilterGraphNode *x2; struct ResourceGraphNode *x3; id x4; id x5; unsigned long long x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; unsigned long long x12; unsigned long long x13; } *_node;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithResource:(struct ResourceGraphNode { id x0; struct NodeList<FilterGraphNode *> { struct FilterGraphNode **x0; unsigned long long x1; unsigned long long x2; } x1; struct FilterGraphNode *x2; struct ResourceGraphNode *x3; id x4; id x5; unsigned long long x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; unsigned long long x12; unsigned long long x13; } *)a0;

@end
