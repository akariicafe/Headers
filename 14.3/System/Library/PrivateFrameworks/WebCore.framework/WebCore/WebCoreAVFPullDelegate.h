@class NSString;

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate>

@property (readonly, nonatomic) struct BinarySemaphore { BOOL m_isSet; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_lock; struct Condition { struct Atomic<bool> { struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } value; } m_hasWaiters; } m_condition; } semaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)outputSequenceWasFlushed:(id)a0;
- (void)outputMediaDataWillChange:(id)a0;

@end
