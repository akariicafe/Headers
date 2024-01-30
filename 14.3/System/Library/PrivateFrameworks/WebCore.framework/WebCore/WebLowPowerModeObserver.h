@interface WebLowPowerModeObserver : NSObject

@property (nonatomic) struct LowPowerModeNotifier { struct RetainPtr<WebLowPowerModeObserver> { void *x0; } x0; struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct CallableWrapperBase<void, bool> *x0; } x0; } x0; } x1; } *notifier;
@property (readonly, nonatomic) BOOL isLowPowerModeEnabled;

- (void)dealloc;
- (void)_didReceiveLowPowerModeChange;
- (id)initWithNotifier:(struct LowPowerModeNotifier { struct RetainPtr<WebLowPowerModeObserver> { void *x0; } x0; struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct CallableWrapperBase<void, bool> *x0; } x0; } x0; } x1; } *)a0;

@end
