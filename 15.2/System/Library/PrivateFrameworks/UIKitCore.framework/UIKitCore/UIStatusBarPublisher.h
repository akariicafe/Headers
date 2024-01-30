@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject {
    struct __CFMachPort { } *_machPort;
    unsigned long long _styleOverrides;
    NSMutableSet *_statusBarItems;
}

- (void)removeStatusBarItem:(int)a0;
- (id)initWithCFMachPort:(struct __CFMachPort { } *)a0;
- (id)statusBarItems;
- (unsigned long long)styleOverrides;
- (void).cxx_destruct;
- (unsigned long long)addStyleOverrides:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)removeStyleOverrides:(unsigned long long)a0;
- (void)addStatusBarItem:(int)a0;
- (unsigned int)publisherPort;

@end
