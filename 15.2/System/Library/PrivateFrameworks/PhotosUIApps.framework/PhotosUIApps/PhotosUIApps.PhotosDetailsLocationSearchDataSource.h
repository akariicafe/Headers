@interface PhotosUIApps.PhotosDetailsLocationSearchDataSource : NSObject <PXPhotosDetailsLocationSearchDataSource, PXInfoProvider, PXInfoUpdaterObserver> {
    void /* unknown type, empty encoding */ suggester;
    void /* unknown type, empty encoding */ assets;
    void /* unknown type, empty encoding */ canRemoveLocation;
    void /* unknown type, empty encoding */ searchQuery;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_infoUpdater;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void).cxx_destruct;
- (id)requestInfoOfKind:(id)a0 withResultHandler:(id /* block */)a1;
- (id)init;
- (void)infoUpdaterDidUpdate:(id)a0;

@end
