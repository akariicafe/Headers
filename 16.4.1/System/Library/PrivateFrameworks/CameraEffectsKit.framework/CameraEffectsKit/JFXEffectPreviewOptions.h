@class PVColorSpace;

@interface JFXEffectPreviewOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long quality;
@property (nonatomic) unsigned int parentCode;
@property (retain, nonatomic) PVColorSpace *outputColorSpace;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initPreviewOptions;

@end
