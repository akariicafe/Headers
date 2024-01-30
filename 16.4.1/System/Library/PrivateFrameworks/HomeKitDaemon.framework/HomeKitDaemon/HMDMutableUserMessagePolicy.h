@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy

@property unsigned long long userPrivilege;
@property BOOL requiresRemoteAccess;
@property BOOL requiresCameraStreamingAccess;

+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2;
+ (id)userMessagePolicyWithHome:(id)a0 userPrivilege:(unsigned long long)a1 remoteAccessRequired:(BOOL)a2 requiresCameraStreamingAccess:(BOOL)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRequiresCameraStreamingAccess:(BOOL)a0;
- (void)setRequiresRemoteAccess:(BOOL)a0;
- (void)setUserPrivilege:(unsigned long long)a0;

@end
