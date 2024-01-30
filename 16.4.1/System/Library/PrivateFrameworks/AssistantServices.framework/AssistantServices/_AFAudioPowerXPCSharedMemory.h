@class NSObject;
@protocol OS_xpc_object;

@interface _AFAudioPowerXPCSharedMemory : NSObject {
    NSObject<OS_xpc_object> *_xpcObject;
    unsigned long long _mappedLength;
    void *_sharedRegion;
}

@property (readonly, nonatomic) float averagePower;
@property (readonly, nonatomic) float peakPower;

- (id)initWithXPCObject:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_destroyMapping;

@end
