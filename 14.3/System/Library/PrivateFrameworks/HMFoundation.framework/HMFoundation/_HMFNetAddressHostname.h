@class NSString;

@interface _HMFNetAddressHostname : HMFNetAddressInternal

@property (readonly, copy, nonatomic) NSString *hostname;

+ (id)normalizedHostname:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)addressString;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithHostname:(id)a0;

@end
