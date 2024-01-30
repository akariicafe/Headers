@interface _LTASRStateEventLog : NSObject

@property (readonly) long long state;

+ (void)logFinalPacketReceived:(id)a0;
+ (void)logFinalPacketSent:(id)a0;
+ (void)logFirstPacketDisplayed:(id)a0;
+ (void)logFirstPacketReceived:(id)a0;
+ (void)logFirstPacketSent:(id)a0;

- (id)init;
- (void)emitWithState:(long long)a0 uuid:(id)a1;
- (id)mtSELFLog;

@end
