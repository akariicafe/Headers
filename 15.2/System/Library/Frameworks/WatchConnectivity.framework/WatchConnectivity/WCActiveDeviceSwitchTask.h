@interface WCActiveDeviceSwitchTask : NSObject

@property BOOL clientReadyForSessionState;
@property unsigned long long taskState;

+ (id)taskStateToString:(unsigned long long)a0;

- (id)description;

@end
