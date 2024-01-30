@interface _AFAudioPowerXPCSharedMemory : NSObject {
    unsigned long long _mappedLength;
    void *_sharedRegion;
}

@property (readonly, nonatomic) float averagePower;
@property (readonly, nonatomic) float peakPower;

- (void)_destroyMapping;
- (void)dealloc;
- (id)initWithXPCObject:(id)a0;

@end
