@class NSArray, ASDAudioDevice, NSObject;
@protocol OS_dispatch_queue;

@interface ASDSRCStream : ASDStream {
    ASDAudioDevice *_owningDevice;
    struct unique_ptr<ASDSRCStreamHelper, std::__1::default_delete<ASDSRCStreamHelper> > { struct __compressed_pair<ASDSRCStreamHelper *, std::__1::default_delete<ASDSRCStreamHelper> > { struct ASDSRCStreamHelper *__value_; } __ptr_; } _streamHelper;
    NSObject<OS_dispatch_queue> *_srcQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    BOOL _isRunning;
    long long _maximumFramesPerIOCycle;
    long long _ioReferenceCount;
}

@property (copy, nonatomic) NSArray *underlyingStreams;
@property (readonly, nonatomic) long long maximumFramesPerIOCycle;

- (void).cxx_destruct;
- (void)stopStream;
- (void)startStream;
- (id).cxx_construct;
- (id /* block */)readInputBlock;
- (id /* block */)writeMixBlock;
- (id)initWithDirection:(unsigned int)a0 withPlugin:(id)a1;
- (void)_updateMaximumFramesPerIOCycle;
- (BOOL)_allocateStreamingResources;
- (void)_deallocateStreamingResources;
- (void)_updateLatency;
- (id)initWithOwningDevice:(id)a0 underlyingStreams:(id)a1 direction:(unsigned int)a2 plugin:(id)a3;
- (BOOL)changePhysicalFormat:(id)a0;
- (void)updateLatency;

@end
