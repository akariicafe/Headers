@class NSMutableSet, NSMutableArray, NSDate;

@interface _DKLocationHistoryCache : NSObject {
    NSMutableArray *_visits;
    NSMutableSet *_visitSet;
    double _earliestTime;
    double _latestTime;
    unsigned long long _index;
    BOOL _needsSorting;
}

@property (readonly) NSDate *oldestEntryDate;
@property (readonly) NSDate *newestExitDate;
@property (readonly) unsigned long long count;

- (void)clear;
- (void).cxx_destruct;
- (id)init;
- (void)clearOldest:(unsigned long long)a0;
- (void)sortIfNecessary;
- (void)addVisitWithEntryDate:(id)a0 exitDate:(id)a1 locationId:(id)a2;
- (id)lookupLocationIdforDate:(id)a0;

@end
