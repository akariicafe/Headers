@class NSString, NSNumber, HAPAccessory;

@interface HMDAccessoryTransportInformation : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HAPAccessory *hapAccessory;
@property (retain, nonatomic) NSString *serverIdentifier;
@property (retain, nonatomic) NSString *protocolVersion;
@property (retain, nonatomic) NSNumber *instanceID;
@property long long linkType;
@property BOOL reachable;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServerIdentifier:(id)a0 instanceID:(id)a1 linkType:(long long)a2 reachable:(BOOL)a3;
- (id)initWithHAPAccessory:(id)a0;

@end
