@class NSSet, PGGraphMomentNode;

@interface PGMomentNodeCachedValues : NSObject

@property (nonatomic) double neighborScore;
@property (retain, nonatomic) NSSet *personLocalIdentifiers;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } bestLocationCoordinate;
@property (retain, nonatomic) PGGraphMomentNode *previousMomentNode;
@property (retain, nonatomic) PGGraphMomentNode *nextMomentNode;
@property (nonatomic) BOOL hasAddressNodes;
@property (nonatomic) BOOL hasAddressNodesIsSet;

- (void).cxx_destruct;
- (id)init;

@end
