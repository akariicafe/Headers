@class NSArray, NSString, NSMutableArray, PKInk;

@interface PKMetalStrokeRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
}

@property (readonly, nonatomic) NSArray *buffers;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithInk:(id)a0;
- (BOOL)isCompatibleWithInk:(id)a0;
- (unsigned long long)cacheCost;
- (BOOL)needsCompute;
- (BOOL)lockPurgeableResourcesAddToSet:(id)a0;
- (void)addBuffer:(id)a0;

@end
