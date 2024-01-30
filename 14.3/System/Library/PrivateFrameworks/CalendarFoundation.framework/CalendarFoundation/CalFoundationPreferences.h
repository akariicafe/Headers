@class NSString, NSArray, CalPreferences, NSDateComponents;

@interface CalFoundationPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (readonly, nonatomic) BOOL logAutoFlush;
@property (readonly, nonatomic) NSString *logFilePath;
@property (readonly, nonatomic) NSArray *logSimpleConfiguration;
@property (nonatomic) double simulatedDateForNowOffset;
@property (retain, nonatomic) NSString *stopTimeDemoMode;
@property (readonly, nonatomic) BOOL stopTimeDemoModeActive;
@property (readonly, nonatomic) NSDateComponents *stopTimeDemoModeComponents;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;

@end
