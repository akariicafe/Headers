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
+ (id)observerForKey:(id)a0 onFileURL:(id)a1;
+ (void)_registerForApplicationLifecycleNotifications;
+ (void)_deregisterInstance:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)addObserverBlock:(id /* block */)a0;
- (id)initWithKey:(id)a0 fileURL:(id)a1;
- (void)_presenterDidChange;

@end
