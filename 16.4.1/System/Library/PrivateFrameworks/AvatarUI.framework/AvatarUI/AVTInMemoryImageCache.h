@class NSString;

@interface AVTInMemoryImageCache : AVTInMemoryResourceCache <AVTImageCache>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageForItem:(id)a0 scope:(id)a1;
- (id)imageForItem:(id)a0 scope:(id)a1 cacheMissHandler:(id /* block */)a2;
- (id)initWithLockProvider:(id /* block */)a0 logger:(id)a1;

@end
