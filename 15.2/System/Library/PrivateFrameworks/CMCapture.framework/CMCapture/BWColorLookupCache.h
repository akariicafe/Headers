@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BWColorLookupCache : NSObject {
    NSObject<OS_dispatch_queue> *_coreImageCacheIsolationQueue;
    NSMutableDictionary *_coreImageTableCache;
}

+ (void)initialize;

- (id)_colorLookupTablesForColorCubesWithMaskFilter:(id)a0;
- (id)_colorLookupTablesForColorCubeFilter:(id)a0;
- (id)colorLookupTablesForFilter:(id)a0;
- (id)identityColorLookupTable;
- (id)init;
- (id)blackColorLookupTable;
- (id)fetchColorLookupTablesForFilter:(id)a0;
- (void)dealloc;
- (id)whiteColorLookupTable;
- (id)interpolatedColorLookupTableFromTable:(id)a0 toTable:(id)a1 fractionComplete:(float)a2;

@end
