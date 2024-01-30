@class NSDictionary, BWVideoFormat;
@protocol BWInferenceCropDescriptor;

@interface BWInferenceVideoFormat : NSObject <NSCopying> {
    BWVideoFormat *_underlyingVideoFormat;
    BOOL _deviceOriented;
    long long _videoContentMode;
    BOOL _includesInvalidContent;
    id<BWInferenceCropDescriptor> _cropDescriptor;
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
@property (readonly, nonatomic) id<BWInferenceCropDescriptor> cropDescriptor;
@property (readonly, copy, nonatomic) id /* block */ histogramRequest;

+ (id)formatByResolvingRequirements:(id)a0;

- (BOOL)representsCompressedEquivalent;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned int)uncompressedEquivalent;
- (unsigned long long)hash;
- (id)description;
- (id)initWithUnderlyingFormat:(id)a0 isDeviceOriented:(BOOL)a1 videoContentMode:(long long)a2 includesInvalidContent:(BOOL)a3 cropDescriptor:(id)a4 histogramRequest:(id /* block */)a5 rotationDegrees:(int)a6;

@end
