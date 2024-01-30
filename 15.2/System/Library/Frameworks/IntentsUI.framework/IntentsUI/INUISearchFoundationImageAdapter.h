@class INImage, NSValue;

@interface INUISearchFoundationImageAdapter : SFImage {
    NSValue *_sizeValue;
}

@property (copy, nonatomic) INImage *intentsImage;

+ (void)initialize;
+ (id)_sharedImageLoader;

- (int)source;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)loadImageDataWithCompletionAndErrorHandler:(id /* block */)a0;
- (void)loadImageDataWithCompletionHandler:(id /* block */)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)hash;
- (id)initWithPayloadImage:(id)a0;
- (id)initWithIntentsImage:(id)a0;
- (id)payloadImage;

@end
