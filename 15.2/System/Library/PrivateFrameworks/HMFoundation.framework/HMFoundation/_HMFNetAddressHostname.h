@class NSString;

@interface _HMFNetAddressHostname : HMFNetAddressInternal

@property (readonly, copy, nonatomic) NSString *hostname;

+ (id)normalizedHostname:(id)a0;

- (id)addressString;
- (id)initWithHostname:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;

@end
