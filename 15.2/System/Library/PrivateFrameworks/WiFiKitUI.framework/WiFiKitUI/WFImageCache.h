@class NSMutableDictionary;

@interface WFImageCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageCache;

+ (id)sharedImageCache;

- (id)imageNamed:(id)a0;
- (void)clearCache;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isUIKitImageName:(id)a0;

@end
