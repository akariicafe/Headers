@class NSCache;

@interface PLPlaceholderImage : NSObject {
    NSCache *_dumbCache;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (struct CGImage { } *)newPlaceholderImageWithSize:(struct CGSize { double x0; double x1; })a0;

@end
