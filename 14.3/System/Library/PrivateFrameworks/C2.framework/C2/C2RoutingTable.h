@class NSMutableDictionary;

@interface C2RoutingTable : NSObject

@property (retain, nonatomic) NSMutableDictionary *routingTable;

- (id)init;
- (void).cxx_destruct;
- (void)updateOriginalHostname:(id)a0 destinationHostname:(id)a1;
- (id)copyAndDecorateRequest:(id)a0;

@end
