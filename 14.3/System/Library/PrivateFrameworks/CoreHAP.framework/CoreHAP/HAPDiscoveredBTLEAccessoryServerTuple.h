@class HAPAccessoryServerBTLE;

@interface HAPDiscoveredBTLEAccessoryServerTuple : HMFObject

@property (readonly, nonatomic) HAPAccessoryServerBTLE *accessoryServer;
@property (nonatomic) double lastSeen;

+ (id)discoveredAccessoryServerTupleWithAccessoryServer:(id)a0;

- (void).cxx_destruct;

@end
