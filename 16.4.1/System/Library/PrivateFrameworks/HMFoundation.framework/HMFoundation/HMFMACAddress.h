@interface HMFMACAddress : HMFHardwareAddress <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (id)initWithAddressData:(id)a0;
- (id)initWithMACAddressString:(id)a0;
- (id)initWithAddressString:(id)a0 length:(unsigned long long)a1;

@end
