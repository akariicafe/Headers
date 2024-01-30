@class NSMutableString;

@interface WFImgArrayCache : NSObject {
    NSMutableString *imageAlternativeDescriptions;
    long long numberOfUnknownSizedImages;
    long long numberOfKnownImagePixels;
}

+ (id)imgArrayCacheWithArray:(id)a0;

- (id)initWithArray:(id)a0;
- (void)dealloc;
- (long long)numberOfKnownImagePixels;
- (id)imageAlternativeDescriptions;
- (long long)numberOfUnknownSizedImages;

@end
