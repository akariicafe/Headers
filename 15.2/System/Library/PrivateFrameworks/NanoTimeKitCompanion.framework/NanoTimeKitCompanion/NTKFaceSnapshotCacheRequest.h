@class NTKFace, NTKFaceSnapshotCacheRequestOptions, NSDate;

@interface NTKFaceSnapshotCacheRequest : NSObject

@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NTKFace *face;
@property (readonly, copy, nonatomic) NTKFaceSnapshotCacheRequestOptions *options;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithFace:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
