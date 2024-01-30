@class NSString;

@interface HMFNetAddressInternal : HMFObject

@property (readonly, nonatomic) unsigned long long addressFamily;
@property (readonly, copy, nonatomic) NSString *addressString;

- (id)dataUsingEncoding:(unsigned long long)a0;
- (void).cxx_destruct;

@end
