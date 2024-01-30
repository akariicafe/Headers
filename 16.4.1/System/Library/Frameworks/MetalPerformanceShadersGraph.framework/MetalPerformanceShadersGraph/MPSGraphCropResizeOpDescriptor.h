@interface MPSGraphCropResizeOpDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long resizeWidth;
@property (nonatomic) unsigned long long resizeHeight;
@property (nonatomic) BOOL normalizeCoordinates;
@property (nonatomic) float spatialScale;
@property (nonatomic) unsigned long long resizeMode;
@property (nonatomic) unsigned long long samplingMode;
@property (nonatomic) unsigned long long coordinateMode;

+ (id)descriptorWithResizeWidth:(unsigned long long)a0 resizeHeight:(unsigned long long)a1;
+ (id)descriptorWithResizeWidth:(unsigned long long)a0 resizeHeight:(unsigned long long)a1 normalizeCoordinates:(BOOL)a2 spatialScale:(float)a3 resizeMode:(unsigned long long)a4 samplingMode:(unsigned long long)a5 coordinateMode:(unsigned long long)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
