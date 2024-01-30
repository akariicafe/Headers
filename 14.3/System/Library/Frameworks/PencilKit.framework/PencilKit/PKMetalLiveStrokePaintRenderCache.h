@class NSArray, NSString, NSMutableArray;

@interface PKMetalLiveStrokePaintRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
}

@property (readonly, nonatomic) NSArray *buffers;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animatedStrokeBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)buffers;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;
- (BOOL)isCompatibleWithInk:(id)a0;
- (unsigned long long)cacheCost;
- (BOOL)needsCompute;
- (void)addBuffer:(id)a0;

@end
