@class NSString, NSMutableArray;

@interface PKMetalPaintRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
    BOOL _purgeableBuffers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isCompatibleWithInk:(id)a0;
- (unsigned long long)cacheCost;
- (BOOL)needsCompute;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;

@end
