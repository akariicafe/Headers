@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface APUniversalSingleton : NSObject {
    NSDictionary *_singletons;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
+ (BOOL)isSingletonSet;
+ (void)resetSingleton;

- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)_setValue:(id)a0 forSingletonKey:(id)a1;
- (id)_valueForSingletonKey:(id)a0;

@end
