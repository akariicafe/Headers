@class NSString;

@interface AudioComponentRegistrar : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) struct AudioComponentRegistrarImpl { BOOL x0; BOOL x1; BOOL x2; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL x0; } x0; } x3; id x4; struct function<void (const AudioComponentVector &, AudioComponentVector &)> { struct __value_func<void (const AudioComponentVector &, AudioComponentVector &)> { struct type { unsigned char x0[24]; } x0; struct __base<void (const AudioComponentVector &, AudioComponentVector &)> *x1; } x0; } x5; struct RegistrarService { id x0; id x1; id x2; } x6; struct RegistrarService { id x0; id x1; id x2; } x7; id x8; struct AudioComponentVector { struct shared_ptr<APComponent> *x0; struct shared_ptr<APComponent> *x1; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> *x0; } x2; BOOL x3; } x9; struct PurgeableDataWrapper { struct function<NSData *()> { struct __value_func<NSData *()> { struct type { unsigned char x0[24]; } x0; struct __base<NSData *()> *x1; } x0; } x0; id x1; } x10; struct PurgeableDataWrapper { struct function<NSData *()> { struct __value_func<NSData *()> { struct type { unsigned char x0[24]; } x0; struct __base<NSData *()> *x1; } x0; } x0; id x1; } x11; struct unique_ptr<AudioComponentPluginScanner, std::__1::default_delete<AudioComponentPluginScanner> > { struct __compressed_pair<AudioComponentPluginScanner *, std::__1::default_delete<AudioComponentPluginScanner> > { struct AudioComponentPluginScanner *x0; } x0; } x12; struct shared_ptr<caulk::synchronized<AUExtensionScanner, caulk::mach::unfair_lock, caulk::empty_atomic_interface<AUExtensionScanner> > > { struct synchronized<AUExtensionScanner, caulk::mach::unfair_lock, caulk::empty_atomic_interface<AUExtensionScanner> > *x0; struct __shared_weak_count *x1; } x13; } *impl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
