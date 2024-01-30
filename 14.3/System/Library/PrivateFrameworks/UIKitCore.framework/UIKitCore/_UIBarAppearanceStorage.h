@class NSMutableDictionary;

@interface _UIBarAppearanceStorage : NSObject {
    NSMutableDictionary *_backgroundImages;
}

+ (long long)typicalBarPosition;

- (void).cxx_destruct;
- (void)setBackgroundImage:(id)a0 forBarPosition:(long long)a1 barMetrics:(long long)a2;
- (BOOL)hasAnyCustomBackgroundImage;
- (void)setAllBackgroundImages:(id)a0;
- (id)allBackgroundImages;
- (id)backgroundImageForBarPosition:(long long)a0 barMetrics:(long long)a1;

@end
