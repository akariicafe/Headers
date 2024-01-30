@class NSString;

@interface VMUNodeGroup : NSObject {
    void *_group;
    unsigned int _nodeNamespaceSize;
    unsigned int _count;
    unsigned int _singleNode;
    unsigned int _inlineNodes[16];
}

@property (readonly) NSString *name;

- (void *)nodes;
- (void)addNode:(unsigned int)a0;
- (void).cxx_destruct;
- (long long)count;
- (void)dealloc;
- (void)enumerateNodesWithBlock:(id /* block */)a0;
- (void)_createGroup;
- (id)initWithName:(id)a0 graph:(id)a1;

@end
