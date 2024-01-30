@class NSMutableDictionary;

@interface WFImageCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageCache;

+ (id)sharedImageCache;

- (void)clearCache;
- (id)init;
- (id)imageNamed:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isUIKitImageName:(id)a0;

@end
