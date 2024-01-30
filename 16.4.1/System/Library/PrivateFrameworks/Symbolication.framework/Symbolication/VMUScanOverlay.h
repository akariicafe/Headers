@class NSMutableArray;

@interface VMUScanOverlay : NSObject

@property (readonly, nonatomic) NSMutableArray *refinementRules;

+ (id)defaultOverlayWithScanner:(id)a0;
+ (BOOL)foundationHasNSSliceMemoryOptimization;
+ (id)defaultOverlay;

- (id)initWithScanner:(id)a0;
- (void)addMetadataRefinementRule:(id /* block */)a0;
- (void).cxx_destruct;

@end
