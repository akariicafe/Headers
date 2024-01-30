@protocol GEOTileLoaderObserver;

@interface _GEOTileLoaderObserverWrapper : NSObject {
    id<GEOTileLoaderObserver> _observer;
    BOOL _implementsLoadedKeyWithSize;
    BOOL _implementsLoadedKeyWithoutSize;
    BOOL _implementsFailedToLoadKey;
}

- (void).cxx_destruct;

@end
