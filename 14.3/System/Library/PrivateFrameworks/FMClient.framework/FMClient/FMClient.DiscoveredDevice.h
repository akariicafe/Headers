@class NSString;

@interface FMClient.DiscoveredDevice : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ deviceName;
    void /* unknown type, empty encoding */ discoveryId;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *discoveryId;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceName:(id)a0 discoveryId:(id)a1;

@end
