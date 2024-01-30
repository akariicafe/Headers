@interface HMDNaturalLightingEnabledRetryContext : HMFObject <NSCopying>

@property unsigned long long retryCount;
@property (readonly) BOOL naturalLightingEnabled;
@property (readonly) id /* block */ completion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithNaturalLightingEnabled:(BOOL)a0 completion:(id /* block */)a1 retryCount:(unsigned long long)a2;

@end
