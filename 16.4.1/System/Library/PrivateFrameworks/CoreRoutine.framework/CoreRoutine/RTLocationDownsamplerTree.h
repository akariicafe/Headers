@class NSArray;

@interface RTLocationDownsamplerTree : NSObject

@property (retain, nonatomic) RTLocationDownsamplerTree *left;
@property (retain, nonatomic) RTLocationDownsamplerTree *right;
@property (retain, nonatomic) NSArray *locations;
@property (nonatomic) double maximumError;
@property (nonatomic) unsigned long long maximumErrorIndex;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)allLocations;
- (double)evaluateLocationsWithErrorFunction:(id /* block */)a0;
- (id)initWithLocations:(id)a0 errorFunction:(id /* block */)a1;
- (id)sampledLocations;
- (void)splitLocationsWithErrorFunction:(id /* block */)a0;

@end
