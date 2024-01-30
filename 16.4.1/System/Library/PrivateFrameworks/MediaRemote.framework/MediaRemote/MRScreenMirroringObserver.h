@class NSObject;
@protocol OS_dispatch_queue;

@interface MRScreenMirroringObserver : NSObject

@property (readonly, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long deviceCount;

+ (id)UIControllingObserver;
+ (id)observerWithStateChangeCallback:(id /* block */)a0;

- (void)_init;
- (void).cxx_destruct;
- (void)_notifyIfNeeded;
- (void)_contextChangeNotification:(id)a0;
- (id)initWithStateChangeCallback:(id /* block */)a0;

@end
