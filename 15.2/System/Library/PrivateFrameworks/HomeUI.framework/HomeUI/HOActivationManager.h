@class NSDate;

@interface HOActivationManager : NSObject

@property (retain, nonatomic) NSDate *lastEnteredForegroundDate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_enteredForeground:(id)a0;

@end
