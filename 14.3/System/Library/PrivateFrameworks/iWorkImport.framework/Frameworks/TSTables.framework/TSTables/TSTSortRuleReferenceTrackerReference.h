@class TSCETrackedReference;

@interface TSTSortRuleReferenceTrackerReference : NSObject

@property (nonatomic) unsigned short columnIndex;
@property (retain, nonatomic) TSCETrackedReference *trackedReference;

+ (id)referenceWithColumnIndex:(unsigned short)a0 trackedReference:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasTrackedReferenceEqualTo:(id)a0;
- (id)initWithColumnIndex:(unsigned short)a0 trackedReference:(id)a1;

@end
