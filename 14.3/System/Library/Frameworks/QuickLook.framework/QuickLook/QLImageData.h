@interface QLImageData : NSObject {
    struct CGImageSource { } *_imageSource;
}

- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (id)imageAtIndex:(unsigned long long)a0;
- (long long)orientation;
- (id)type;
- (id)initWithImageSource:(struct CGImageSource { } *)a0;
- (id)durations;
- (unsigned long long)count;

@end
