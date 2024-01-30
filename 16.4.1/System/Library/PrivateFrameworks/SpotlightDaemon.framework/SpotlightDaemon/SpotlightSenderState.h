@class CSReceiverServerPreferences;

@interface SpotlightSenderState : NSObject

@property (readonly, nonatomic) CSReceiverServerPreferences *serverPreferences;

- (BOOL)clientDisabled:(long long)a0;
- (void)_updateFromPreferences;
- (id)init;
- (void).cxx_destruct;

@end
