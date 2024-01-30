@class NSDictionary, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface WFActionRateLimiter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSDictionary *attempts;

+ (id)sharedInstance;
+ (void)performAction:(id)a0 onQueue:(id)a1 withBlock:(id /* block */)a2;

- (id)initWithUserDefaults:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)modify:(id /* block */)a0;

@end
