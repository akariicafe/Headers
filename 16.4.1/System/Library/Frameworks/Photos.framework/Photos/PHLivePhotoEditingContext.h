@class CIImage, PFLivePhotoEditSession;

@interface PHLivePhotoEditingContext : NSObject {
    PFLivePhotoEditSession *_editSession;
}

@property (readonly) CIImage *fullSizeImage;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } photoTime;
@property (copy) id /* block */ frameProcessor;
@property float audioVolume;
@property (readonly) unsigned int orientation;

+ (id)errorWithUnderlyingError:(id)a0;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLivePhotoEditingInput:(id)a0;
- (void)prepareLivePhotoForPlaybackWithTargetSize:(struct CGSize { double x0; double x1; })a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveLivePhotoToOutput:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;

@end
