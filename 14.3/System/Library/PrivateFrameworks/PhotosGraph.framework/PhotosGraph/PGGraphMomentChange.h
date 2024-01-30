@class NSString, PGGraphMomentNode;

@interface PGGraphMomentChange : PGGraphChange

@property (readonly, nonatomic) NSString *momentLocalIdentifier;
@property (retain, nonatomic) PGGraphMomentNode *momentNode;
@property (readonly, nonatomic) unsigned long long updateTypes;

- (void)mergeChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithMomentLocalIdentifier:(id)a0 updateTypes:(unsigned long long)a1;
- (id)description;
- (unsigned long long)type;

@end
