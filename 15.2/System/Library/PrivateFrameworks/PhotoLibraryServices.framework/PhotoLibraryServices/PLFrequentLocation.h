@class NSSet, NSDateInterval, NSString, NSMutableArray;
@protocol PLMomentProcessingProtocol;

@interface PLFrequentLocation : NSObject <PLFrequentLocationProtocol>

@property (retain, nonatomic) NSMutableArray *sortedMoments;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (retain, nonatomic) NSSet *momentsSet;
@property (retain, nonatomic) id<PLMomentProcessingProtocol> centroid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSortedMoments:(id)a0;
- (BOOL)isSimilarToFrequentLocation:(id)a0;
- (void)addMomentToSortedMoment:(id)a0;
- (BOOL)isWithinDistance:(double)a0 toCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)_invalidateLazyProperties;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
