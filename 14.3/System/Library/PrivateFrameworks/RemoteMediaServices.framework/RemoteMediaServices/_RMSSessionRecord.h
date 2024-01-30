@class RMSPowerAssertion, RMSRunAssertion;

@interface _RMSSessionRecord : NSObject

@property (nonatomic) int refreshCount;
@property (nonatomic) int timeout;
@property (retain, nonatomic) id session;
@property (retain, nonatomic) RMSPowerAssertion *powerAssertion;
@property (retain, nonatomic) RMSRunAssertion *runAssertion;

- (void).cxx_destruct;

@end
