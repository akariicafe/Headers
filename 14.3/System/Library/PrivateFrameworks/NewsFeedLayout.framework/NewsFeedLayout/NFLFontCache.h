@class FCThreadSafeMutableDictionary;

@interface NFLFontCache : NSObject

@property (retain, nonatomic) FCThreadSafeMutableDictionary *fontCache;

- (void)clearCache;
- (id)init;
- (void).cxx_destruct;
- (id)fontWithName:(id)a0 size:(double)a1;

@end
