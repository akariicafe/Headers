@class NSTimer, NSString;

@interface TPStatusBarManager : NSObject

@property (retain, nonatomic) NSTimer *callDurationTimer;
@property (copy, nonatomic) NSString *currentAbbreviatedStatusBarString;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;
- (void)updateCurrentAbbreviatedStatusBarString;

@end
