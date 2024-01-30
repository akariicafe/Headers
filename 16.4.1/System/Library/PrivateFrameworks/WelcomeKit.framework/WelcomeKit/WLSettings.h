@interface WLSettings : NSObject

@property (nonatomic) BOOL enableAccessibilityDisplayInversion;
@property (nonatomic) BOOL enableDisplayZoom;
@property (nonatomic) BOOL enableDisplayDarkMode;
@property (nonatomic) double accessibilityFontScale;

+ (id)settingsWithData:(id)a0;

- (id)initWithJSONDictionary:(id)a0;
- (id)initWithPreferences;

@end
