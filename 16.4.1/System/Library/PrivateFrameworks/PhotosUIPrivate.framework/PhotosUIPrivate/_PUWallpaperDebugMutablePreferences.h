@class UIColor, UIFont, NSString;

@interface _PUWallpaperDebugMutablePreferences : NSObject <PUWallpaperMutablePreferences>

@property (retain, nonatomic) UIFont *timeFont;
@property (retain, nonatomic) UIColor *timeColor;
@property (retain, nonatomic) UIColor *statusBarTintColor;
@property (nonatomic) unsigned long long significantEventTime;
@property (nonatomic) unsigned long long significantEventOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
