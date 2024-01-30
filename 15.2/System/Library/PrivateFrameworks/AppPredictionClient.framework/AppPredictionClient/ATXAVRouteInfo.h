@class NSString;

@interface ATXAVRouteInfo : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) BOOL isExternalRoute;

- (id)initWithProto:(id)a0;
- (id)initWithDeviceName:(id)a0 deviceID:(id)a1 isExternalRoute:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)encodeAsProto;

@end
