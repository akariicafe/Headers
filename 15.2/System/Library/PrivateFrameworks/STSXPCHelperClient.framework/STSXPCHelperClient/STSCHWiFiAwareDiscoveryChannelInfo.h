@class NSNumber;

@interface STSCHWiFiAwareDiscoveryChannelInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *supportedBands;
@property (retain, nonatomic) NSNumber *operatingClass;
@property (retain, nonatomic) NSNumber *channelNumber;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asData;
- (id)initWithSupportedBands:(id)a0 operatingClass:(id)a1 channelNumber:(id)a2;

@end
