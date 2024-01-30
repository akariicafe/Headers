@class NSString, MPMediaItem;

@interface VUIMPMediaItem : VUIMediaItem <VUIMPMediaEntityImageLoadParamsCreating> {
    NSString *_coverArtImageIdentifier;
    NSString *_previewFrameImageIdentifier;
}

@property (retain, nonatomic) MPMediaItem *mediaItem;

- (id)isPlayable;
- (id)isLocal;
- (id)resolution;
- (id)studio;
- (id)credits;
- (id)assetType;
- (id)contentRating;
- (void).cxx_destruct;
- (id)rentalExpirationDate;
- (id)assetController;
- (id)initWithMediaLibrary:(id)a0 mediaItem:(id)a1 requestedProperties:(id)a2;
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
- (id)showIdentifier;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)coverArtImageIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)_valueForPropertyDescriptor:(id)a0;
- (id)mediaPlayerMediaItem;
- (id)previewFrameImageIdentifier;

@end
