@class NSString, UIImageView, UIImage, NTKFaceSnapshotCacheRequest, NTKFace;

@interface NTKFaceSnapshotViewController : UIViewController <NTKFaceObserver>

@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (retain, nonatomic) NSString *snapshotKeyOfSnapshotImage;
@property (retain, nonatomic) NTKFaceSnapshotCacheRequest *snapshotRequest;
@property (readonly, nonatomic) NTKFace *face;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)faceConfigurationDidChange:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)faceResourceDirectoryDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithFace:(id)a0;
- (void)_attemptToFetchSnapshot;
- (void)_handleSnapshot:(id)a0 forKey:(id)a1;
- (void)_updateFaceSnapshotIfNecessaryOfFace;

@end
