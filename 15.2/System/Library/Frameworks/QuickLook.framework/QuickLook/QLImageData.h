@interface QLImageData : NSObject {
    struct CGImageSource { } *_imageSource;
}

- (id)durations;
- (struct CGSize { double x0; double x1; })size;
- (long long)orientation;
- (unsigned long long)count;
- (id)type;
- (void)dealloc;
- (id)imageAtIndex:(unsigned long long)a0;
- (id)initWithImageSource:(struct CGImageSource { } *)a0;

@end
