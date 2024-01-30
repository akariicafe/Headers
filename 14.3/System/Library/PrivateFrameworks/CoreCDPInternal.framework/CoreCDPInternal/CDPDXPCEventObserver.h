@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray *_eventListeners;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)registerListener:(id)a0;
- (void)_setupDistributedListener;
- (void)_setupDarwinListener;
- (void)start;

@end
