@interface QLImageData : NSObject {
    struct CGImageSource { } *_imageSource;
}

- (id)type;
- (long long)orientation;
- (unsigned long long)count;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (id)durations;
- (id)imageAtIndex:(unsigned long long)a0;
- (id)initWithImageSource:(struct CGImageSource { } *)a0;

@end
