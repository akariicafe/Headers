@class NSArray, NSString, PPTEvent, NSData, NSMutableArray;

@interface PPTTimeSeries : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding> {
    BOOL _isSorted;
    NSData *_sortHint;
    NSMutableArray *_events;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *allTimestamps;
@property (readonly) NSArray *array;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PPTEvent *firstObject;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PPTEvent *lastObject;

- (void)removeEvent:(id)a0;
- (void)addEvent:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)containsEvent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllEvents;
- (id)initWithCoder:(id)a0;
- (id)objectEnumerator;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)sortedArrayUsingComparator:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)filterUsingPredicate:(id)a0;
- (id)reverseObjectEnumerator;
- (id)initWithEvents:(id)a0;
- (void)_guaranteeSortedness;
- (id)filteredTimeSeriesUsingPredicate:(id)a0;
- (id)initWithEvents:(id *)a0 count:(unsigned long long)a1;
- (BOOL)isEqualToTimeSeries:(id)a0;
- (id)metricValuesForKey:(id)a0;

@end
