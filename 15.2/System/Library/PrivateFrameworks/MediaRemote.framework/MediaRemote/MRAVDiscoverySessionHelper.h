@interface MRAVDiscoverySessionHelper : NSObject {
    unsigned long long _discoverySessionFeatures;
}

- (id)initWithFeatures:(unsigned long long)a0;
- (void)searchAVOutputDeviceForUID:(id)a0 timeout:(double)a1 identifier:(id)a2 reason:(id)a3 completion:(id /* block */)a4;
- (id)createDiscoverySession;

@end
