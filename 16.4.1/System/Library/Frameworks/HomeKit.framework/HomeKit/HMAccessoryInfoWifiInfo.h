@class NSString;

@interface HMAccessoryInfoWifiInfo : NSObject

@property (readonly) NSString *macAddress;
@property (readonly) NSString *networkSSID;

- (id)initWithProtoData:(id)a0;
- (id)protoData;
- (void).cxx_destruct;
- (id)initWithMacAddress:(id)a0 networkSSID:(id)a1;
- (id)hmfWifiNetworkInfo;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithWifiNetworkInfo:(id)a0;
- (id)protoPayload;

@end
