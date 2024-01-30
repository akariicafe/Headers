@class PHAssetCreationRequest, NSString;

@interface _PHAssetCreationRequestValidator : PHValidator

@property (readonly, weak, nonatomic) PHAssetCreationRequest *assetCreationRequest;
@property (readonly, nonatomic) NSString *validatedPairingIdentifier;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } validatedVideoDuration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } validatedImageDisplayTime;

- (void).cxx_destruct;
- (id)initWithAssetCreationRequest:(id)a0;
- (BOOL)getLivePhotoVideoMetadataFromURL:(id)a0 pairingIdentifier:(id *)a1 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 imageDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3 error:(id *)a4;

@end
