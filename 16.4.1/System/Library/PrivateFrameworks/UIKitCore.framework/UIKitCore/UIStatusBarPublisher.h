@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject {
    struct __CFMachPort { } *_machPort;
    unsigned long long _styleOverrides;
    NSMutableSet *_statusBarItems;
}

- (unsigned long long)addStyleOverrides:(unsigned long long)a0;
- (unsigned long long)removeStyleOverrides:(unsigned long long)a0;
- (void)dealloc;
- (void)removeStatusBarItem:(int)a0;
- (void)addStatusBarItem:(int)a0;
- (void).cxx_destruct;
- (id)initWithCFMachPort:(struct __CFMachPort { } *)a0;
- (unsigned int)publisherPort;
- (id)statusBarItems;
- (unsigned long long)styleOverrides;

@end
