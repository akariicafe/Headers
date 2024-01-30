@class NSString, WiFiAwarePublishServiceSpecificInfo, WiFiMACAddress;

@interface WiFiAwareDiscoveryResult : NSObject <NSSecureCoding> {
    long long _datapathCipherSuite;
    long long _fsdFunction;
    unsigned char _subscribeID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) WiFiAwarePublishServiceSpecificInfo *serviceSpecificInfo;
@property (readonly, nonatomic) unsigned char publishID;
@property (readonly, nonatomic) WiFiMACAddress *publisherAddress;
@property (readonly, nonatomic) BOOL datapathSupported;
@property (readonly, nonatomic) BOOL datapathSecurityRequired;
@property (readonly, nonatomic) BOOL furtherServiceDiscoveryRequired;
@property (readonly, nonatomic) long long rssi;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)serviceSpecificInfoEqual:(id)a0;
- (unsigned char)subscribeID;
- (long long)datapathCipherSuite;
- (long long)fsdFunction;
- (id)initWithServiceName:(id)a0 serviceSpecificInfo:(id)a1 publishID:(unsigned char)a2 subscribeID:(unsigned char)a3 publisherAddressKey:(id)a4 datapathSupported:(BOOL)a5 datapathCipherSuite:(long long)a6 fsdFunction:(long long)a7 rssi:(long long)a8;
- (const char *)fsdFunctionString;

@end
