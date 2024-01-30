@class NSUUID, NSString, NSObject, PRProximityDeviceParameters;
@protocol OS_os_log;

@interface PRProximityDevice : NSObject <PRProximityDeviceProtocol> {
    NSObject<OS_os_log> *_logger;
    NSString *_model;
    PRProximityDeviceParameters *_proximityParameters;
    struct deque<BtProxData, std::allocator<BtProxData>> { struct __split_buffer<BtProxData *, std::allocator<BtProxData *>> { struct BtProxData **__first_; struct BtProxData **__begin_; struct BtProxData **__end_; struct __compressed_pair<BtProxData **, std::allocator<BtProxData *>> { struct BtProxData **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<BtProxData>> { unsigned long long __value_; } __size_; } _samples;
    long long _proximity;
}

@property (readonly) NSUUID *peer;

- (void)addSample:(struct BtProxData { double x0; double x1; unsigned int x2; })a0;
- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (long long)deviceProximity;
- (void)estimateProximity;
- (id)initWithPeer:(id)a0 andPeerModel:(id)a1 withError:(id *)a2;
- (BOOL)proxReady;

@end
