@interface HMDSecureRemoteMessageFilter : HMDMessageFilter

+ (id)logCategory;
+ (BOOL)isWhitelistedMessage:(id)a0;

- (id)logIdentifier;
- (BOOL)acceptMessage:(id)a0 target:(id)a1 errorReason:(id *)a2;

@end
