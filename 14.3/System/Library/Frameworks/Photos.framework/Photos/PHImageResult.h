@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (id)imageData;
- (void)setImageData:(id)a0;
- (id)sanitizedInfoDictionary;
- (void)setIsPlaceholder:(BOOL)a0;
- (void)setImageURL:(id)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)imageRef;
- (void)dealloc;
- (id)allowedInfoKeys;
- (BOOL)isPlaceholder;
- (BOOL)isDegraded;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (void)setDegraded:(BOOL)a0;
- (void)setImageRef:(struct CGImage { } *)a0;
- (id)imageURL;
- (BOOL)containsValidData;
- (long long)uiOrientation;

@end
