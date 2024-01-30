@class TVRMSRunAssertion, TVRMSPowerAssertion;

@interface _RMSSessionRecord : NSObject

@property (nonatomic) int refreshCount;
@property (nonatomic) int timeout;
@property (retain, nonatomic) id session;
@property (retain, nonatomic) TVRMSPowerAssertion *powerAssertion;
@property (retain, nonatomic) TVRMSRunAssertion *runAssertion;

- (void).cxx_destruct;

@end
