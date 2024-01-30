@class MFActivityMonitor, NSString;

@interface MFMonitoredInvocation : NSInvocation {
    BOOL _shouldLogInvocation;
}

@property (readonly, nonatomic) MFActivityMonitor *monitor;
@property (nonatomic) BOOL isLowPriority;
@property (copy, nonatomic) NSString *powerAssertionId;

+ (id)invocationWithMethodSignature:(id)a0;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object:(id)a2 taskName:(id)a3 priority:(int)a4 canBeCancelled:(BOOL)a5;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 taskName:(id)a2 priority:(int)a3 canBeCancelled:(BOOL)a4;
+ (id)invocationWithSelector:(SEL)a0 target:(id)a1 object1:(id)a2 object2:(id)a3 taskName:(id)a4 priority:(int)a5 canBeCancelled:(BOOL)a6;

- (void)invoke;
- (id)description;
- (void)dealloc;
- (BOOL)mf_shouldLogInvocation;
- (void)setShouldLogInvocation:(BOOL)a0;

@end
