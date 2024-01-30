@class NSTimer, NSString;

@interface TPStatusBarManager : NSObject

@property (retain, nonatomic) NSTimer *callDurationTimer;
@property (copy, nonatomic) NSString *currentAbbreviatedStatusBarString;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateCurrentAbbreviatedStatusBarString;
- (void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;

@end
