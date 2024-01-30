@class NSString, MPMediaItem;

@interface VUIMPMediaItem : VUIMediaItem <VUIMPMediaEntityImageLoadParamsCreating> {
    NSString *_coverArtImageIdentifier;
    NSString *_previewFrameImageIdentifier;
}

@property (retain, nonatomic) MPMediaItem *mediaItem;

- (id)isLocal;
- (id)assetType;
- (void).cxx_destruct;
- (id)studio;
- (id)credits;
- (id)rentalExpirationDate;
- (id)contentRating;
- (id)isPlayable;
- (id)resolution;
- (id)assetController;
- (id)mediaPlayerMediaItem;
- (id)HLSResolution;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)HLSAudioCapability;
- (id)audioCapability;
- (id)extrasURL;
- (id)seasonCanonicalID;
- (id)showCanonicalID;
- (id)seasonIdentifier;
- (id)playedState;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)showIdentifier;
- (id)initWithMediaLibrary:(id)a0 mediaItem:(id)a1 requestedProperties:(id)a2;
- (id)previewFrameImageIdentifier;
- (id)coverArtImageIdentifier;
- (id)_valueForPropertyDescriptor:(id)a0;

@end
