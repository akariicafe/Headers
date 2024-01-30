@class NSNumber, NSString;

@interface PHImageResult : PHCompositeMediaResult {
    struct CGImage { } *_imageRef;
    BOOL _isPlaceholder;
    BOOL _degraded;
}

@property (copy, nonatomic) NSNumber *exifOrientation;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (id)imageURL;
- (void)setIsPlaceholder:(BOOL)a0;
- (BOOL)isDegraded;
- (void)setDegraded:(BOOL)a0;
- (id)imageData;
- (long long)uiOrientation;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 averagePixelLuminance:(id)a2;
- (void)setImageRef:(struct CGImage { } *)a0;
- (void)setImageData:(id)a0;
- (struct CGImage { } *)imageRef;
- (BOOL)containsValidData;
- (BOOL)isPlaceholder;
- (id)allowedInfoKeys;
- (id)sanitizedInfoDictionary;
- (void).cxx_destruct;
- (void)setImageURL:(id)a0;
- (void)dealloc;

@end
