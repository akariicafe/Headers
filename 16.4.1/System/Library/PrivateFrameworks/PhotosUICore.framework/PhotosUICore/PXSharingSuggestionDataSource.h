@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PXSharingSuggestionDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {
    NSObject<OS_dispatch_queue> *_fetchQueue;
}

@property (nonatomic) BOOL prefetchingStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMembers:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (void)dealloc;
- (void).cxx_destruct;
- (id)titleAtIndex:(unsigned long long)a0;
- (void)imageCacheDidChanged:(id)a0;
- (id)initWithName:(id)a0 objectsReloadBlock:(id /* block */)a1;
- (void)prefetchThumbnailsForTargetSize:(struct CGSize { double x0; double x1; })a0 maxFetchCount:(unsigned long long)a1;

@end
