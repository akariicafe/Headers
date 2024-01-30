@class NSObject;
@protocol OS_dispatch_source;

@interface NFMemoryObserver : NSObject {
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
