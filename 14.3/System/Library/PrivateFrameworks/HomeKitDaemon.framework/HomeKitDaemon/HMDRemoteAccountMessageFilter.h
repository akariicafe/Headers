@class HMFMessageDestination, NSArray;

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter

@property (readonly) HMFMessageDestination *target;
@property (readonly, copy) NSArray *whitelistedMessages;

+ (id)logCategory;

- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithName:(id)a0;
- (BOOL)acceptMessage:(id)a0 target:(id)a1 errorReason:(id *)a2;
- (id)initWithTarget:(id)a0 whitelistedMessages:(id)a1;
- (BOOL)__shouldCheckMessage:(id)a0;

@end
