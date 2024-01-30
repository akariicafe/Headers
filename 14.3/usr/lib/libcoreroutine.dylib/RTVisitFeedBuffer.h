@class NSMutableArray, NSDate;

@interface RTVisitFeedBuffer : NSObject {
    id /* block */ _comparator;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSDate *lastMaturedLocationDate;
@property (readonly, nonatomic) unsigned long long numLocations;
@property (readonly, nonatomic) double minWaitInterval;

- (id)init;
- (void).cxx_destruct;
- (id)maturedLocations;
- (void)addLocations:(id)a0;
- (id)initWithMinWaitInterval:(double)a0;

@end
