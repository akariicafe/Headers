@class NSString, UIImage, NTKFaceCollection, NTKFace, NSObject;
@protocol NTKLibrarySelectedFaceSnapshotProviderDelegate, OS_dispatch_queue;

@interface NTKLibrarySelectedFaceSnapshotProvider : NSObject <NTKFaceCollectionObserver, NTKFaceObserver> {
    NTKFaceCollection *_libraryCollection;
    NTKFace *_selectedFace;
    NSString *_snapshotKey;
    NSObject<OS_dispatch_queue> *_snapshotRequestsQueue;
    BOOL _resumedQueue;
}

@property (weak, nonatomic) id<NTKLibrarySelectedFaceSnapshotProviderDelegate> delegate;
@property (readonly, nonatomic) UIImage *snapshotImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)snapshotCurrentFaceForActiveDeviceWithOptions:(id)a0 completion:(id /* block */)a1;
+ (void)snapshotCurrentFaceForDevice:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
+ (void)snapshotCurrentFaceForDeviceUUID:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;

- (void)faceConfigurationDidChange:(id)a0;
- (void)faceCollectionDidLoad:(id)a0;
- (void)dealloc;
- (void)faceResourceDirectoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_handleFaceChange:(id)a0;
- (void)_handleSnapshotChangedNotification:(id)a0;
- (void)_notifyIfSnapshotAvailable;
- (void)_updateSelectedFaceAndSnapshotKey;
- (void)faceCollection:(id)a0 didSelectFace:(id)a1 atIndex:(unsigned long long)a2;
- (id)initWithDeviceUUID:(id)a0;
- (id)initWithDeviceUUID:(id)a0 delegate:(id)a1;
- (void)snapshotSelectedFaceWithOptions:(id)a0 completion:(id /* block */)a1;

@end
