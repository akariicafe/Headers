@interface CBDisplayModuleiOS : CBDisplayModule

@property (readonly) struct __Display { } *displayInternal;

- (id)initWithBacklight:(unsigned int)a0 queue:(id)a1 display:(id)a2;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)dealloc;
- (void)stop;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)start;
- (id)copyPropertyInternalForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyIdentifiers;

@end
