@interface TSDInstantAlphaImage : NSObject {
    long long mWidth;
    long long mHeight;
    unsigned int *mImageData;
}

- (void)dealloc;
- (id)initWithWidth:(long long)a0 height:(long long)a1;
- (unsigned int)averageColorAtXPosition:(long long)a0 yPosition:(long long)a1;

@end
