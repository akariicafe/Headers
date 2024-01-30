@class NSIndexSet, NSArray, NSIndexPath;

@interface PUTransitionSectionInfo : NSObject

@property (nonatomic) long long transitionSection;
@property (retain, nonatomic) NSIndexSet *visualSections;
@property (retain, nonatomic) NSArray *visualRowStartMarkers;
@property (nonatomic) long long contiguousRows;
@property (retain, nonatomic) NSIndexPath *anchorRealPath;
@property (nonatomic) struct PUGridCoordinates { long long row; long long column; } anchorShiftOffset;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
