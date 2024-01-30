@class NSString;

@interface CRLatticeEdge : NSObject

@property (readonly, nonatomic) NSString *symbol;
@property (readonly) unsigned long long edgeIndex;
@property (readonly) double score;
@property (readonly) unsigned long long startNode;
@property (readonly) unsigned long long endNode;

- (void).cxx_destruct;
- (id)initWithSymbol:(id)a0 index:(unsigned long long)a1 score:(double)a2 startNode:(unsigned long long)a3 endNode:(unsigned long long)a4;

@end
