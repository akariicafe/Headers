@class NSDate;

@interface HOActivationManager : NSObject

@property (retain, nonatomic) NSDate *lastEnteredForegroundDate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_enteredForeground:(id)a0;

@end
