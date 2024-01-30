@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderResultCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cache;
}

+ (id)shared;

- (void)flush;
- (void)setResult:(id)a0 forJob:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)resultForJob:(id)a0;

@end
