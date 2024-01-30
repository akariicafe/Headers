@class NTKFace, NSDictionary, NSDate;

@interface NTKFaceSnapshotRequest : NSObject

@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NTKFace *face;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithFace:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
