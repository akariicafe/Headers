@class NSUUID, NSString, NSObject;
@protocol OS_os_log;

@interface PRProximitySingleThresholdDevice : NSObject <PRProximityDeviceProtocol> {
    NSObject<OS_os_log> *_logger;
    NSString *_model;
    struct deque<BtProxData, std::allocator<BtProxData>> { struct __split_buffer<BtProxData *, std::allocator<BtProxData *>> { struct BtProxData **__first_; struct BtProxData **__begin_; struct BtProxData **__end_; struct __compressed_pair<BtProxData **, std::allocator<BtProxData *>> { struct BtProxData **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<BtProxData>> { unsigned long long __value_; } __size_; } _samples;
    long long _proximity;
    struct unique_ptr<SingleThresholdProx::Estimator, std::default_delete<SingleThresholdProx::Estimator>> { struct __compressed_pair<SingleThresholdProx::Estimator *, std::default_delete<SingleThresholdProx::Estimator>> { struct Estimator *__value_; } __ptr_; } _estimator;
    long long _sampleCount;
    double _mostRecentSampleTime;
}

@property (readonly) NSUUID *peer;

- (void)addSample:(struct BtProxData { double x0; double x1; unsigned int x2; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (long long)deviceProximity;
- (id)initWithPeer:(id)a0 andPeerModel:(id)a1 withError:(id *)a2;
- (BOOL)proxReady;

@end
