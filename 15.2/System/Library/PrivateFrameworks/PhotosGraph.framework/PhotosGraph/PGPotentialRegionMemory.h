@class NSString, NSArray, PGGraphROINode, NSDate, NSMutableSet;

@interface PGPotentialRegionMemory : PGPotentialMemory {
    NSMutableSet *_mutableMomentNodes;
}

@property (readonly) PGGraphROINode *regionNode;
@property (readonly) long long year;
@property (readonly) NSString *region;
@property (retain) NSArray *scenedAssetLocalIdentifiers;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;
- (void)addMomentNode:(id)a0;
- (id)initWithRegionNode:(id)a0 year:(long long)a1;

@end
