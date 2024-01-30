@interface HMMutableXPCMessageTransportConfiguration : HMXPCMessageTransportConfiguration

@property unsigned long long requiredEntitlements;
@property BOOL requiresHomeDataAccess;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
