@class NSString, MPMediaItem;

@interface VUIMPMediaItem : VUIMediaItem <VUIMPMediaEntityImageLoadParamsCreating> {
    NSString *_coverArtImageIdentifier;
    NSString *_previewFrameImageIdentifier;
}

@property (retain, nonatomic) MPMediaItem *mediaItem;

- (id)resolution;
- (id)isPlayable;
- (id)assetType;
- (id)assetController;
- (id)isLocal;
- (void).cxx_destruct;
- (id)contentRating;
- (id)credits;
- (id)rentalExpirationDate;
- (id)studio;
- (id)extrasURL;
- (id)HLSAudioCapability;
- (id)HLSResolution;
- (id)colorCapability;
- (id)HLSColorCapability;
- (id)audioCapability;
- (id)showCanonicalID;
- (id)_valueForPropertyDescriptor:(id)a0;
- (id)coverArtImageIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)initWithMediaLibrary:(id)a0 mediaItem:(id)a1 requestedProperties:(id)a2;
- (id)mediaPlayerMediaItem;
- (id)playedState;
- (id)previewFrameImageIdentifier;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)showIdentifier;

@end
