@class NSString, MPMediaItemCollection;

@interface VUIMPMediaCollection : VUIMediaCollection <VUIMPMediaEntityImageLoadParamsCreating> {
    NSString *_coverArtImageIdentifier;
}

@property (retain, nonatomic) MPMediaItemCollection *mediaItemCollection;

- (id)isLocal;
- (id)resolution;
- (id)contentRating;
- (void).cxx_destruct;
- (id)assetController;
- (id)HLSResolution;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)HLSAudioCapability;
- (id)audioCapability;
- (id)initWithMediaLibrary:(id)a0 mediaItemCollection:(id)a1 identifier:(id)a2 requestedProperties:(id)a3 kind:(id)a4;
- (id)playedState;
- (id)showIdentifier;
- (id)initWithMediaLibrary:(id)a0 identifier:(id)a1 requestedProperties:(id)a2 kind:(id)a3;
- (id)coverArtImageIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)_valueForPropertyDescriptor:(id)a0;

@end
