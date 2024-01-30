@interface _PFPlaceholderMulticaster : PFMulticaster

+ (Class)placeholderSubclassOfClass:(Class)a0 named:(id)a1;
+ (BOOL)tryConvertToConcreteMulticaster:(id)a0;
+ (void)convertToConcreteMulticaster:(id)a0 forReceiver:(id)a1;
+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (void)__ignore;
- (void)addReceiver:(id)a0;
- (void)addWeakReceiver:(id)a0;

@end
