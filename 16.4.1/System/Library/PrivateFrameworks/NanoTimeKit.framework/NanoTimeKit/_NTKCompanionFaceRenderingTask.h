@class NTKFace;

@interface _NTKCompanionFaceRenderingTask : NSObject

@property (readonly, nonatomic) NTKFace *face;
@property (readonly, nonatomic, getter=isMemberOfBatch) BOOL memberOfBatch;
@property (readonly, nonatomic) long long detailMode;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithFace:(id)a0 detailMode:(long long)a1 completionHandler:(id /* block */)a2;

@end
