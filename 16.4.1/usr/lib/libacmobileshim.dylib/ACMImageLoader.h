@class NSMutableDictionary;

@interface ACMImageLoader : NSObject {
    NSMutableDictionary *_imagesCache;
}

@property (readonly) NSMutableDictionary *imagesCache;

+ (id)sharedInstance;

- (id)imageNamed:(id)a0;
- (void)dealloc;

@end
