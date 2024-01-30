@interface TeaUI.SharedImageCache : _TtCs12_SwiftObject <TSSharedImageCacheType> {
    void /* unknown type, empty encoding */ memoryCache;
}

- (void)cache:(id)a0 forKey:(id)a1;
- (void)pruneImagesOlderThan:(double)a0;
- (id)fetchImageForKey:(id)a0;
- (void)cache:(id)a0 forKey:(id)a1 immediately:(BOOL)a2;

@end
