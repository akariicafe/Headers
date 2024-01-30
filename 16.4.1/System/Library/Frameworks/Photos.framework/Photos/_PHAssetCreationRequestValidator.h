@class PHAssetCreationRequest, NSString;

@interface _PHAssetCreationRequestValidator : PHValidator

@property (readonly, weak, nonatomic) PHAssetCreationRequest *assetCreationRequest;
@property (readonly, nonatomic) NSString *validatedPairingIdentifier;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } validatedVideoDuration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } validatedImageDisplayTime;

- (void).cxx_destruct;
- (BOOL)getLivePhotoVideoMetadataFromURL:(id)a0 videoComplementMetadata:(id)a1 pairingIdentifier:(id *)a2 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3 imageDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a4 error:(id *)a5;
- (id)initWithAssetCreationRequest:(id)a0;

@end
