@class NSMutableDictionary;

@interface TSCEEdgeListPrinter : NSObject {
    NSMutableDictionary *_edgesForOwner;
}

- (void).cxx_destruct;
- (id)stringForOwnerID:(id)a0 withLimit:(unsigned long long)a1;
- (void)addEdge:(id)a0 forOwner:(id)a1;
- (id)stringForEdgesWithLimit:(unsigned long long)a0;

@end
