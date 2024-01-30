@class NSSet, NSMutableDictionary, PGGraphLocationHelper;

@interface PGIncompleteLocationResolver : NSObject {
    PGGraphLocationHelper *_locationHelper;
}

@property (retain, nonatomic) NSSet *addressNodes;
@property (retain, nonatomic) NSMutableDictionary *resolvedLocationNodesCache;

+ (double)_maxDistanceForDimension:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)_resolveIdentifierForIncompleteAddressNode:(id)a0 withTargetDimension:(unsigned long long)a1;
- (id)_resolvedAddressForIncompleteAddress:(id)a0 withTargetDimension:(unsigned long long)a1 resolvedDimension:(unsigned long long *)a2 resolvedLocation:(id *)a3 addresses:(id)a4;
- (id)_resolvedAddressForIncompleteAddress:(id)a0 withTargetDimension:(unsigned long long)a1 resolvedDimension:(unsigned long long *)a2 resolvedLocation:(id *)a3 sortedAddresses:(id)a4;
- (id)_resolvedLocationNodeForIncompleteAddressNode:(id)a0 withTargetDimension:(unsigned long long)a1 resolvedDimension:(unsigned long long *)a2 continueResolvingHigherDimensions:(BOOL)a3;
- (id)initWithAddressNodes:(id)a0 locationHelper:(id)a1;
- (id)resolvedLocationNodeForIncompleteAddressNode:(id)a0 withPreferredTargetDimension:(unsigned long long)a1 resolvedDimension:(unsigned long long *)a2;
- (id)resolvedLocationNodeForIncompleteAddressNode:(id)a0 withTargetDimension:(unsigned long long)a1;

@end
