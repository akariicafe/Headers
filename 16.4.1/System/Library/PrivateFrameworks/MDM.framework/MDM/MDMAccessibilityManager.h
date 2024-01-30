@interface MDMAccessibilityManager : NSObject

@property (nonatomic) BOOL boldTextEnabled;
@property (nonatomic) BOOL increaseContrastEnabled;
@property (nonatomic) BOOL reduceMotionEnabled;
@property (nonatomic) BOOL reduceTransparencyEnabled;
@property (nonatomic) BOOL touchAccommodationsEnabled;
@property (nonatomic) BOOL voiceOverEnabled;
@property (nonatomic) BOOL zoomEnabled;
@property (nonatomic) BOOL grayscaleEnabled;
@property (nonatomic) long long textSize;

+ (id)sharedInstance;

- (BOOL)isValidTextSize:(long long)a0;

@end
