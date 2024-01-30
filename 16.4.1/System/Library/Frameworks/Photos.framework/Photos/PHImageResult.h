@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (void)setImageData:(id)a0;
- (id)imageURL;
- (id)imageData;
- (long long)uiOrientation;
- (id)sanitizedInfoDictionary;
- (void)setIsPlaceholder:(BOOL)a0;
- (BOOL)isPlaceholder;
- (void)setImageURL:(id)a0;
- (struct CGImage { } *)imageRef;
- (void)setDegraded:(BOOL)a0;
- (void)dealloc;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (id)allowedInfoKeys;
- (BOOL)isDegraded;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (void)setImageRef:(struct CGImage { } *)a0;

@end
