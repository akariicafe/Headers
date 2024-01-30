@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray *_eventListeners;
}

+ (id)sharedObserver;

- (void)start;
- (void)_setupDarwinListener;
- (void).cxx_destruct;
- (void)_setupDistributedListener;
- (void)registerListener:(id)a0;

@end
