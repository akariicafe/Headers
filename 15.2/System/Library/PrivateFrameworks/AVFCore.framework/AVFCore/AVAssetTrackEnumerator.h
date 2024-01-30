@class NSString, NSArray, NSEnumerator;

@interface AVAssetTrackEnumerator : NSEnumerator {
    NSString *_mediaType;
    NSArray *_mediaCharacteristics;
    NSEnumerator *_enumerator;
}

+ (id)trackEnumeratorWithAsset:(id)a0;

- (id)nextObject;
- (id)initWithAsset:(id)a0;
- (void)setMediaType:(id)a0;
- (id)initWithAsset:(id)a0 mediaCharacteristics:(id)a1;
- (id)initWithAsset:(id)a0 mediaType:(id)a1;
- (void)dealloc;
- (void)setMediaCharacteristics:(id)a0;

@end
