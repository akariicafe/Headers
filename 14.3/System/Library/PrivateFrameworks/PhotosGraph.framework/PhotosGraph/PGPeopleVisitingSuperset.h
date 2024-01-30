@class NSCountedSet, PGPeopleVisitingVisit, NSDateInterval, NSMutableArray, PGGraphAddressNode;

@interface PGPeopleVisitingSuperset : NSObject {
    NSCountedSet *_numberOfMomentsByDistance;
    PGPeopleVisitingVisit *_currentVisit;
}

@property (readonly) PGGraphAddressNode *addressNode;
@property (readonly) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinates;
@property (readonly) NSDateInterval *localDateInterval;
@property (readonly) unsigned long long numberOfMatchingMoments;
@property (readonly) unsigned long long totalNumberOfMoments;
@property (readonly) NSMutableArray *visits;
@property (readonly) double lowerVeryFarRatio;
@property (readonly) double upperVeryFarRatio;
@property (readonly) double lowerFarRatio;
@property (readonly) double upperFarRatio;
@property (readonly) double lowerCloseRatio;
@property (readonly) double upperCloseRatio;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAddressNode:(id)a0 localDateInterval:(id)a1;
- (void)registerMomentNode:(id)a0 distance:(unsigned long long)a1;
- (void)closeVisitFindingSession;
- (void)resetVisitFindingSession;

@end
