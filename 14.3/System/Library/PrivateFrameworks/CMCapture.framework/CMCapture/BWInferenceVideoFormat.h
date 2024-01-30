@class NSDictionary, BWVideoFormat;

@interface BWInferenceVideoFormat : NSObject <NSCopying> {
    BWVideoFormat *_underlyingVideoFormat;
    BOOL _deviceOriented;
    long long _videoContentMode;
    BOOL _includesInvalidContent;
    BOOL _finalCropRectApplied;
    int _rotationDegrees;
}

@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned int pixelFormat;
@property (readonly, nonatomic) unsigned long long extendedWidth;
@property (readonly, nonatomic) unsigned long long extendedHeight;
@property (readonly, nonatomic) int colorSpaceProperties;
@property (readonly, nonatomic) BOOL deviceOriented;
@property (readonly, nonatomic) int rotationDegrees;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly, nonatomic) BWVideoFormat *underlyingVideoFormat;
@property (readonly, nonatomic) long long videoContentMode;
@property (readonly, nonatomic) BOOL includesInvalidContent;
@property (readonly, nonatomic) BOOL finalCropRectApplied;

+ (id)formatByResolvingRequirements:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUnderlyingFormat:(id)a0 isDeviceOriented:(BOOL)a1 videoContentMode:(long long)a2 includesInvalidContent:(BOOL)a3 finalCropRectApplied:(BOOL)a4 rotationDegrees:(int)a5;

@end
