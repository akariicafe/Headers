@class NSNumber;

@interface PLOPTICSClusterDescriptor : NSObject

@property (readonly, retain, nonatomic) NSNumber *startIndex;
@property (readonly, retain, nonatomic) NSNumber *endIndex;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } indexRange;
@property (readonly, retain, nonatomic) NSNumber *clusterSize;
@property (readonly, retain, nonatomic) NSNumber *rootLevel;
@property (readonly, retain, nonatomic) NSNumber *minCoreDistanceIndex;
@property (readonly, retain, nonatomic) NSNumber *minCoreDistance;

+ (id)clusterDescriptor:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 rootLevel:(long long)a1 minCoreDistanceIndex:(long long)a2 minCoreDistance:(double)a3;

- (void).cxx_destruct;
- (id)initWithParameters:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 rootLevel:(long long)a1 minCoreDistanceIndex:(long long)a2 minCoreDistance:(double)a3;

@end
