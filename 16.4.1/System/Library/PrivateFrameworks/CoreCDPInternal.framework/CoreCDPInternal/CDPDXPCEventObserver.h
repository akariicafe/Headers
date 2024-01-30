@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray *_eventListeners;
}

+ (id)sharedObserver;

- (void)_setupDarwinListener;
- (void)registerListener:(id)a0;
- (void)_setupDistributedListener;
- (void)start;
- (void).cxx_destruct;

@end
