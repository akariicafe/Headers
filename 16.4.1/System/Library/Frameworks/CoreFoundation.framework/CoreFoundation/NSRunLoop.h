@class NSString;

@interface NSRunLoop : NSObject {
    id _rl;
    id _dperf;
    id _perft;
    id _info;
    id _ports;
}

@property (class, readonly) NSRunLoop *currentRunLoop;
@property (class, readonly) NSRunLoop *mainRunLoop;

@property (readonly, copy) NSString *currentMode;

+ (id)_new:(id)a0;
+ (id)currentRunLoop;
+ (id)mainRunLoop;

- (void)run;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performBlock:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)allModes;
- (void)_wakeup;
- (void)_addPort:(id)a0 forMode:(id)a1;
- (BOOL)_containsPort:(id)a0 forMode:(id)a1;
- (void)_enumerateInfoPairsWithBlock:(id /* block */)a0;
- (void)_invalidateTimers;
- (void)_portInvalidated:(id)a0;
- (void)_removePort:(id)a0 forMode:(id)a1;
- (void)acceptInputForMode:(id)a0 beforeDate:(id)a1;
- (void)addPort:(id)a0 forMode:(id)a1;
- (void)addTimer:(id)a0 forMode:(id)a1;
- (void)cancelPerformSelector:(SEL)a0 target:(id)a1 argument:(id)a2;
- (void)cancelPerformSelectorsWithTarget:(id)a0;
- (BOOL)containsPort:(id)a0 forMode:(id)a1;
- (BOOL)containsTimer:(id)a0 forMode:(id)a1;
- (id)limitDateForMode:(id)a0;
- (void)performInModes:(id)a0 block:(id /* block */)a1;
- (void)performSelector:(SEL)a0 target:(id)a1 argument:(id)a2 order:(unsigned long long)a3 modes:(id)a4;
- (id)portsForMode:(id)a0;
- (void)removePort:(id)a0 forMode:(id)a1;
- (void)removeTimer:(id)a0 forMode:(id)a1;
- (BOOL)runBeforeDate:(id)a0;
- (void)runLoopScheduledWithAction:(id)a0;
- (BOOL)runMode:(id)a0 beforeDate:(id)a1;
- (BOOL)runMode:(id)a0 untilDate:(id)a1;
- (void)runUntilDate:(id)a0;
- (id)timersForMode:(id)a0;
- (id)currentMode;
- (id)_info;
- (void)_deallocHelper;
- (id)_dperf;
- (id)_initWithRl:(id)a0 dperf:(id)a1 perft:(id)a2 info:(id)a3 ports:(id)a4;
- (id)_perft;
- (id)_ports;
- (struct __CFRunLoop { } *)getCFRunLoop;

@end
