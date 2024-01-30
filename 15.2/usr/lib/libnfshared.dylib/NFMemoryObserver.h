@class NSObject;
@protocol OS_dispatch_source;

@interface NFMemoryObserver : NSObject {
    NSObject<OS_dispatch_source> *_source;
}

- (void)start;
- (void).cxx_destruct;
- (void)stop;

@end
