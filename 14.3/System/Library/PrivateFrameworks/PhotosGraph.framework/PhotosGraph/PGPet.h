@class NSString, NSMutableSet;

@interface PGPet : NSObject <PGGraphIngestPet>

@property (readonly, nonatomic) NSMutableSet *momentNodes;
@property (readonly, nonatomic) NSMutableSet *ownerNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMomentNodes:(id)a0 ownerNodes:(id)a1;

@end
