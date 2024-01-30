@class NSTimer, NSString;

@interface TPStatusBarManager : NSObject

@property (retain, nonatomic) NSTimer *callDurationTimer;
@property (copy, nonatomic) NSString *currentAbbreviatedStatusBarString;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;
- (void)updateCurrentAbbreviatedStatusBarString;

@end
