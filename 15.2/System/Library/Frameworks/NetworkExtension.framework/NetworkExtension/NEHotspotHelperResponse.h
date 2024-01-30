@interface NEHotspotHelperResponse : NSObject

@property struct __CNPluginResponse { } *response;

- (void)deliver;
- (id)description;
- (void)setNetworkList:(id)a0;
- (void)dealloc;
- (void)setNetwork:(id)a0;
- (id)initWithResponse:(struct __CNPluginResponse { } *)a0;

@end
