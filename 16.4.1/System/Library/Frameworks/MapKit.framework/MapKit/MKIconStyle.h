@class UIColor, UIImage, GEOFeatureStyleAttributes, UIImageAsset;

@interface MKIconStyle : NSObject {
    GEOFeatureStyleAttributes *_styleAttributes;
    UIColor *_backgroundColorLight;
    UIColor *_backgroundColorDark;
    UIImageAsset *_combinedImageAsset;
    BOOL _isHybridMap;
}

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (BOOL)_elevationForIcons;
- (void)_setColorAndImages;
- (id)iconForModifiers:(id)a0;
- (id)initWithStyleAttributes:(id)a0 isHybridMap:(BOOL)a1;
- (void)registerImage:(id)a0 darkMode:(BOOL)a1;

@end
