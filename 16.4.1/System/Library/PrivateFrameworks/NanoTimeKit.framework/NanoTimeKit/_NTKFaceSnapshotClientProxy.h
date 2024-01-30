@protocol NTKFaceSnapshotClient;

@interface _NTKFaceSnapshotClientProxy : NSObject {
    id<NTKFaceSnapshotClient> _proxy;
}

- (id)initWithWeakProxy:(id)a0;
- (void).cxx_destruct;
- (void)faceSnapshotChangedForKey:(id)a0;

@end
