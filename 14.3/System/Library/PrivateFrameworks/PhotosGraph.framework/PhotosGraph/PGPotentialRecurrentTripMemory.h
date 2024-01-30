@class NSArray, NSSet;

@interface PGPotentialRecurrentTripMemory : PGPotentialMemory

@property (readonly) NSArray *tripNodes;
@property (readonly) NSSet *locationNodes;

- (void).cxx_destruct;
- (id)initWithTripNodes:(id)a0 locationNodes:(id)a1 momentNodes:(id)a2;

@end
