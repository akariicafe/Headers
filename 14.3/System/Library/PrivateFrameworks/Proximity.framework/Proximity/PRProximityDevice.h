@class NSUUID, NSString, NSObject, PRProximityDeviceParameters;
@protocol OS_os_log;

@interface PRProximityDevice : NSObject <PRProximityDeviceProtocol> {
    NSObject<OS_os_log> *_logger;
    NSString *_model;
    PRProximityDeviceParameters *_proximityParameters;
    struct deque<BtProxData, std::__1::allocator<BtProxData> > { struct __split_buffer<BtProxData *, std::__1::allocator<BtProxData *> > { struct BtProxData **__first_; struct BtProxData **__begin_; struct BtProxData **__end_; struct __compressed_pair<BtProxData **, std::__1::allocator<BtProxData *> > { struct BtProxData **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::__1::allocator<BtProxData> > { unsigned long long __value_; } __size_; } _samples;
    long long _proximity;
}

@property (readonly) NSUUID *peer;

- (id)init;
- (void).cxx_destruct;
- (void)addSample:(struct BtProxData { double x0; double x1; unsigned int x2; })a0;
- (id).cxx_construct;
- (id)initWithPeer:(id)a0 andPeerModel:(id)a1 withError:(id *)a2;
- (BOOL)proxReady;
- (long long)deviceProximity;
- (void)estimateProximity;

@end
