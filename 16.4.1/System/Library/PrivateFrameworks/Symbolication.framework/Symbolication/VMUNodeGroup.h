@class NSString;

@interface VMUNodeGroup : NSObject {
    void *_group;
    unsigned int _nodeNamespaceSize;
    unsigned int _count;
    unsigned int _singleNode;
    unsigned int _inlineNodes[16];
}

@property (readonly) NSString *name;

- (void)addNode:(unsigned int)a0;
- (void)enumerateNodesWithBlock:(id /* block */)a0;
- (long long)count;
- (void *)nodes;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_createGroup;
- (id)initWithName:(id)a0 graph:(id)a1;

@end
