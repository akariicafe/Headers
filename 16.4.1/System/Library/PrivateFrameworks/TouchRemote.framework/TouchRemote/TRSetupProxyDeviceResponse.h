@class AKDevice;

@interface TRSetupProxyDeviceResponse : TRResponseMessage

@property (retain, nonatomic) AKDevice *proxyDevice;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
