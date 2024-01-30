@class UIImage, NSHashTable;

@interface TLKImage : TLKObject

@property (readonly, nonatomic) UIImage *uiImageToRender;
@property (retain, nonatomic) NSHashTable *completionTable;
@property (retain, nonatomic) UIImage *uiImage;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) unsigned long long cornerRoundingStyle;
@property (nonatomic) BOOL useFastPathShadow;
@property (nonatomic) double cornerRadius;

- (id)initWithImage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didLoadImageWithCompletion:(id /* block */)a0;

@end
