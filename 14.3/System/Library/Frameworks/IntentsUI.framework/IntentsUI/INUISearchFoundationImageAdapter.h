@class INImage, NSValue;

@interface INUISearchFoundationImageAdapter : SFImage {
    NSValue *_sizeValue;
}

@property (copy, nonatomic) INImage *intentsImage;

+ (void)initialize;
+ (id)_sharedImageLoader;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (unsigned long long)hash;
- (void)loadImageDataWithCompletionAndErrorHandler:(id /* block */)a0;
- (void)loadImageDataWithCompletionHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (int)source;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPayloadImage:(id)a0;
- (id)initWithIntentsImage:(id)a0;
- (id)payloadImage;

@end
