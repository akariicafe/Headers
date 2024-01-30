@class NSArray, NSString, NSMutableArray;

@interface PKMetalPaintRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
    BOOL _purgeableBuffers;
}

@property (readonly, nonatomic) NSArray *buffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)buffers;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;
- (BOOL)isCompatibleWithInk:(id)a0;
- (unsigned long long)cacheCost;
- (BOOL)needsCompute;
- (void)addBuffer:(id)a0;
- (id)initWithPurgeableBuffers:(BOOL)a0;

@end
