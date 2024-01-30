@class AKDevice;

@interface TRSetupProxyDeviceResponse : TRResponseMessage

@property (retain, nonatomic) AKDevice *proxyDevice;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
