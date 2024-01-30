@interface NSRunLoop : NSObject {
    id _rl;
    id _dperf;
    id _perft;
    id _info;
    id _ports;
    void *_reserved[6];
}

+ (id)_new:(id)a0;
+ (id)mainRunLoop;
+ (id)currentRunLoop;

- (id)currentMode;
- (struct __CFRunLoop { } *)getCFRunLoop;
- (void)_wakeup;
- (void)run;
- (void)addTimer:(id)a0 forMode:(id)a1;
- (void)performBlock:(id /* block */)a0;
- (id)allModes;
- (id)init;
- (void)performSelector:(SEL)a0 target:(id)a1 argument:(id)a2 order:(unsigned long long)a3 modes:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancelPerformSelector:(SEL)a0 target:(id)a1 argument:(id)a2;
- (void)dealloc;
- (void)cancelPerformSelectorsWithTarget:(id)a0;
- (id)portsForMode:(id)a0;
- (void)runUntilDate:(id)a0;
- (void)acceptInputForMode:(id)a0 beforeDate:(id)a1;
- (id)timersForMode:(id)a0;
- (BOOL)runBeforeDate:(id)a0;
- (void)_enumerateInfoPairsWithBlock:(id /* block */)a0;
- (id)description;
- (void)_removePort:(id)a0 forMode:(id)a1;
- (void)removeTimer:(id)a0 forMode:(id)a1;
- (BOOL)_containsPort:(id)a0 forMode:(id)a1;
- (void)_portInvalidated:(id)a0;
- (BOOL)containsTimer:(id)a0 forMode:(id)a1;
- (void)performInModes:(id)a0 block:(id /* block */)a1;
- (BOOL)containsPort:(id)a0 forMode:(id)a1;
- (void)_addPort:(id)a0 forMode:(id)a1;
- (void)_invalidateTimers;
- (id)limitDateForMode:(id)a0;
- (void)addPort:(id)a0 forMode:(id)a1;
- (BOOL)runMode:(id)a0 beforeDate:(id)a1;
- (void)removePort:(id)a0 forMode:(id)a1;
- (BOOL)runMode:(id)a0 untilDate:(id)a1;

@end
