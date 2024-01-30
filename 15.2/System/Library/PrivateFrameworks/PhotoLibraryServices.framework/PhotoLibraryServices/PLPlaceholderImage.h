@class NSCache;

@interface PLPlaceholderImage : NSObject {
    NSCache *_dumbCache;
}

+ (id)sharedManager;

- (struct CGImage { } *)newPlaceholderImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
