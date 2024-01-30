@class PGGraphLocationCityNodeCollection, NSDateInterval, PGGraphLocationStateNode, NSMutableArray, PGGraphLocationNodeCollection;

@interface PGPastSupersetGroup : NSObject

@property (retain) NSMutableArray *momentNodes;
@property (retain) NSDateInterval *dateInterval;
@property (retain) PGGraphLocationCityNodeCollection *supersetCityNodes;
@property (retain) PGGraphLocationNodeCollection *densestCloseLocationNodes;
@property (retain) PGGraphLocationStateNode *stateNode;

+ (id)pastSupersetGroupWithMomentNodes:(id)a0 dateInterval:(id)a1 supersetCityNode:(id)a2 densestCloseLocationNode:(id)a3;

- (void).cxx_destruct;

@end
