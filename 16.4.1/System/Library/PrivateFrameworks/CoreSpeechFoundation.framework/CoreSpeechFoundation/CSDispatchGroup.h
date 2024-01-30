@class NSObject;
@protocol OS_dispatch_group;

@interface CSDispatchGroup : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    int _dispatchGroupCounter;
}

- (long long)waitWithTimeout:(unsigned long long)a0;
- (void)enter;
- (void)leave;
- (id)init;
- (void).cxx_destruct;

@end
