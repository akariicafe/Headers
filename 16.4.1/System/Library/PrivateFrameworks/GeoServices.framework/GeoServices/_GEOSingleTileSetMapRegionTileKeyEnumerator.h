@class NSString, GEOMapRegion, NSArray;

@interface _GEOSingleTileSetMapRegionTileKeyEnumerator : NSObject <GEOTileKeyEnumerator> {
    GEOMapRegion *_region;
    int _style;
    int _size;
    int _scale;
    NSArray *_zoomLevels;
    long long _zoomMode;
    unsigned long long _currentZIndex;
    unsigned int _currentOffset;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)continueEnumeratingTileKeysWithBlock:(id /* block */)a0;
- (id)initWithMapRegion:(id)a0 tileSet:(id)a1 zoomMode:(long long)a2;

@end
