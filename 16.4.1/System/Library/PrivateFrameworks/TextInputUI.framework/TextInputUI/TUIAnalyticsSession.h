@interface TUIAnalyticsSession : NSObject

@property (readonly, nonatomic, getter=isSessionActive) BOOL sessionActive;

+ (id)preferredEventName:(id)a0;
+ (id)currentInputModeIdentifier;

- (void)endSession;
- (void)dealloc;
- (void)beginSession;

@end
