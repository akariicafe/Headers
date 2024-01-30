@class AXMutableReplayableGesture, NSMutableArray, NSMutableDictionary;
@protocol AXGestureRecorderFingerPathCollectionDelegate;

@interface AXGestureRecorderFingerPathCollection : NSObject

@property (nonatomic) unsigned long long maximumFingerPathsCount;
@property (nonatomic) unsigned long long referenceTimesArrayIndex;
@property (readonly, nonatomic) NSMutableArray *referenceTimesArray;
@property (retain, nonatomic) NSMutableArray *fingerPaths;
@property (retain, nonatomic) NSMutableArray *pointsArrays;
@property (retain, nonatomic) NSMutableArray *forcesArrays;
@property (retain, nonatomic) NSMutableDictionary *touchPathIndicesToFingerPathIndices;
@property (retain, nonatomic) NSMutableArray *timesArrays;
@property (retain, nonatomic) AXMutableReplayableGesture *replayableGesture;
@property (weak, nonatomic) id<AXGestureRecorderFingerPathCollectionDelegate> delegate;
@property (readonly, nonatomic) unsigned long long fingerPathsCount;
@property (readonly, nonatomic) unsigned long long timestampsCount;
@property (nonatomic) BOOL shouldRecordRealTimeGesture;
@property (nonatomic) double minimumFingerLineWidth;
@property (nonatomic) double maximumFingerLineWidth;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)_referenceTimesArrayIndexNeedsRefresh;
- (id)_realTimeFingerPathToAppendForIndex:(unsigned long long)a0 upToPositionForTimestampAtIndex:(unsigned long long)a1;
- (id)_nonRealTimeFingerPathToAppendForIndex:(unsigned long long)a0 upToPositionForTimestampAtIndex:(unsigned long long)a1;
- (id)_bezierPathToAppendForTouchLocation:(struct CGPoint { double x0; double x1; })a0 unnamedValue:(double)a1 optionalPreviousTouchLocation:(id)a2 optionalPreviousForce:(id)a3;
- (double)timestampAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_interfaceOrientedScreenPointForPoint:(struct CGPoint { double x0; double x1; })a0 view:(id)a1;
- (void)_didInsertFingerPathAtIndex:(unsigned long long)a0;
- (void)_didUpdateFingerPathAtIndex:(unsigned long long)a0;
- (void)_addPointsToReplayableGesture:(id)a0 forces:(id)a1 time:(double)a2;
- (id)initWithMaximumFingerPathsCount:(unsigned long long)a0;
- (id)fingerPathAtIndex:(unsigned long long)a0;
- (id)fingerPathToAppendForIndex:(unsigned long long)a0 forTimestampAtIndex:(unsigned long long)a1;
- (id)propertyListRepresentationWithName:(id)a0;
- (id)replayableGestureRepresentation;
- (void)appendPointsForTouches:(id)a0 referenceView:(id)a1 time:(double)a2;
- (void)handleLiftForTouches:(id)a0 referenceView:(id)a1 time:(double)a2;
- (void)appendFingerPathsFromFingerPathCollection:(id)a0;

@end
