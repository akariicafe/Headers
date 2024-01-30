@class NSUUID, SFDevice;

@interface TRNearbyDevice : NSObject

@property (nonatomic) unsigned long long supportedService;
@property (readonly, nonatomic) SFDevice *representedDevice;
@property (readonly, nonatomic) NSUUID *identifier;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRepresentedDevice:(id)a0 supportedService:(unsigned long long)a1;

@end
