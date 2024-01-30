@class NSString;

@interface ATXPredictionDeviceStateContext : ATXPredictionContextDomain

@property (readonly, nonatomic) BOOL onWifi;
@property (readonly, nonatomic) NSString *wifiSSID;
@property (readonly, nonatomic) BOOL inAirplaneMode;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithWifiSSID:(id)a0 onWifi:(BOOL)a1 inAirplaneMode:(BOOL)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqualToATXPredictionDeviceStateContext:(id)a0;
- (id)jsonDict;

@end
