@class HMFMessageDestination, NSArray;

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter

@property (readonly) HMFMessageDestination *target;
@property (readonly, copy) NSArray *whitelistedMessages;

+ (id)logCategory;

- (id)logIdentifier;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (BOOL)acceptMessage:(id)a0 target:(id)a1 errorReason:(id *)a2;
- (id)initWithTarget:(id)a0 whitelistedMessages:(id)a1;
- (BOOL)__shouldCheckMessage:(id)a0;

@end
