@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface _MPArtworkDataSourceURLCache : NSURLCache {
    NSMapTable *_requestSizeMap;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

- (void)setRepresentationSize:(struct CGSize { double x0; double x1; })a0 forRequest:(id)a1;
- (void).cxx_destruct;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (id)initWithMemoryCapacity:(unsigned long long)a0 diskCapacity:(unsigned long long)a1 diskPath:(id)a2;

@end
