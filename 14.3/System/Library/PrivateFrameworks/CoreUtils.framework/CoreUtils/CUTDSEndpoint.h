@class NSData, NSString;

@interface CUTDSEndpoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int dataLinkType;
@property (copy, nonatomic) NSData *deviceAddress;
@property (copy, nonatomic) NSString *serviceType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
