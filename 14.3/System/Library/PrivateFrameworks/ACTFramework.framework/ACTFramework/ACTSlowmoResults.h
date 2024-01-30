@class NSMutableDictionary;

@interface ACTSlowmoResults : NSObject

@property (readonly) NSMutableDictionary *results;
@property BOOL verbose;
@property double minTimeBetweenFrames;

- (id)init;
- (void)dealloc;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)writeToFile:(id)a0;
- (void)dumpClusters;
- (id)copyClusters;
- (void)mergeClusters:(id)a0 cluster2:(id)a1;
- (void)addFrame:(double)a0 frameValue:(int)a1;
- (void)performPass1Clustering;
- (void)performPass2Clustering;
- (void)reduceToSingleTimeRange;
- (void)addVerboseResult:(id)a0;

@end
