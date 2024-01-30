@class NSString;

@interface ATXPredictionDeviceStateContext : ATXPredictionContextDomain

@property (readonly, nonatomic) BOOL onWifi;
@property (readonly, nonatomic) NSString *wifiSSID;
@property (readonly, nonatomic) BOOL inAirplaneMode;

- (id)jsonDict;
- (void).cxx_destruct;
- (id)initWithWifiSSID:(id)a0 onWifi:(BOOL)a1 inAirplaneMode:(BOOL)a2;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXPredictionDeviceStateContext:(id)a0;

@end
