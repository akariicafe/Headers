@class NSUUID, SFDevice;

@interface TRNearbyDevice : NSObject

@property (nonatomic) unsigned long long supportedService;
@property (readonly, nonatomic) SFDevice *representedDevice;
@property (readonly, nonatomic) NSUUID *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRepresentedDevice:(id)a0 supportedService:(unsigned long long)a1;
- (id)description;

@end
