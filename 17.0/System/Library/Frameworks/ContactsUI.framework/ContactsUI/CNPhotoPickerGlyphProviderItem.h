@class NSString, UIColor, UIView;

@interface CNPhotoPickerGlyphProviderItem : CNPhotoPickerProviderItem

@property (retain, nonatomic) UIView *symbolImageView;
@property (retain, nonatomic) NSString *symbolImageName;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) unsigned long long addItemType;

+ (id)thumbnailViewForImage:(id)a0;

- (id)backgroundColorWithTintColor:(id)a0;
- (unsigned long long)imageType;
- (void).cxx_destruct;
- (id)imageForImageNamed:(id)a0 withTintColor:(id)a1;
- (id)initWithSymbolImageNamed:(id)a0;
- (id)initWithSymbolImageNamed:(id)a0 withAddItemType:(unsigned long long)a1;
- (long long)scaleForImageNamed:(id)a0;
- (void)setupSymbolImageView;
- (void)thumbnailViewWithCompletion:(id /* block */)a0;
- (void)updateTintColorIfNeeded:(id)a0;

@end
