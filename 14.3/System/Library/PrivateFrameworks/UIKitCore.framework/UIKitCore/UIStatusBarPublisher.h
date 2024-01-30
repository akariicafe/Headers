@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject {
    struct __CFMachPort { } *_machPort;
    int _styleOverrides;
    NSMutableSet *_statusBarItems;
}

- (int)removeStyleOverrides:(int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)addStyleOverrides:(int)a0;
- (unsigned int)publisherPort;
- (id)initWithCFMachPort:(struct __CFMachPort { } *)a0;
- (id)statusBarItems;
- (int)styleOverrides;
- (void)removeStatusBarItem:(int)a0;
- (void)addStatusBarItem:(int)a0;

@end
