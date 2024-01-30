@class NSString;

@interface ATXAVRouteInfo : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) BOOL isExternalRoute;

- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceName:(id)a0 deviceID:(id)a1 isExternalRoute:(BOOL)a2;

@end
