@class NSArray, NSString, PXPeopleDetailsContext, NSObject;
@protocol OS_dispatch_queue;

@interface PXPeopleWidgetDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {
    NSObject<OS_dispatch_queue> *_fetchQueue;
}

@property (nonatomic) BOOL prefetchingStarted;
@property (nonatomic) BOOL containsSocialGroups;
@property (readonly, nonatomic) NSArray *members;
@property (retain, nonatomic) PXPeopleDetailsContext *context;
@property (nonatomic) BOOL isForOneUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChange:(id)a0;
- (id)titleAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (void)imageCacheDidChanged:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 objectsReloadBlock:(id /* block */)a1;
- (void)_updateMembers;
- (void)prefetchThumbnailsForTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 maxFetchCount:(unsigned long long)a2;
- (void)loadMembersWithCompletionBlock:(id /* block */)a0;
- (id)_socialGroupsForIdentifiers:(id)a0;

@end
