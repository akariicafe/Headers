@class MFActivityMonitor, NSString;

@interface MFMonitoredInvocation : NSInvocation {
    BOOL _shouldLogInvocation;
}

@property (readonly, nonatomic) MFActivityMonitor *monitor;
@property (copy, nonatomic) NSString *powerAssertionId;

+ (id)invocationWithMethodSignature:(id)a0;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object:(id)a2 taskName:(id)a3 priority:(unsigned long long)a4 canBeCancelled:(BOOL)a5;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 taskName:(id)a2 priority:(unsigned long long)a3 canBeCancelled:(BOOL)a4;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3 taskName:(id)a4 priority:(unsigned long long)a5 canBeCancelled:(BOOL)a6;

- (void)invoke;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)mf_shouldLogInvocation;
- (void)setShouldLogInvocation:(BOOL)a0;

@end
