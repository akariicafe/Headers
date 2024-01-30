@class NSDictionary;

@interface PFMetadataImageCaptureMovieProperties : PFMetadataCore {
    NSDictionary *_iccMovieProperties;
}

- (id)initWithImageCaptureMovieProperties:(id)a0 contentType:(id)a1 timeZoneLookup:(id)a2;
- (id)_makeGPSProperties;
- (BOOL)configureWithMetadataPlist:(id)a0;
- (id)livePhotoPairingIdentifier;
- (void).cxx_destruct;
- (id)plistForEncoding;
- (BOOL)isSloMo;
- (id)durationTimeInterval;
- (BOOL)isTimelapse;
- (id)originalFilenamee;

@end
