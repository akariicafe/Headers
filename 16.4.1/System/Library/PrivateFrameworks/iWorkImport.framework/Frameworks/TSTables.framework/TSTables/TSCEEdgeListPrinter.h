@class NSMutableDictionary;

@interface TSCEEdgeListPrinter : NSObject {
    NSMutableDictionary *_edgesForOwner;
}

- (void).cxx_destruct;
- (void)addEdge:(id)a0 forOwner:(id)a1;
- (id)stringForEdgesWithLimit:(unsigned long long)a0;
- (id)stringForOwnerID:(id)a0 withLimit:(unsigned long long)a1;

@end
