@class NSString, _BRObservableFilePresenter;

@interface BRObservableFile : NSObject <NSObservable>

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) _BRObservableFilePresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_applicationWillResignActive:(id)a0;
+ (void)_applicationDidBecomeActive:(id)a0;
+ (void)_registerInstance:(id)a0;
+ (void)_deregisterInstance:(id)a0;
+ (void)_registerForApplicationLifecycleNotifications;
+ (id)observerForKey:(id)a0 onFileURL:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)addObserverBlock:(id /* block */)a0;
- (void)_presenterDidChange;
- (id)initWithKey:(id)a0 fileURL:(id)a1;

@end
