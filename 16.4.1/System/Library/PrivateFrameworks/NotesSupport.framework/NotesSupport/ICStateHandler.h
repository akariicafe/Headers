@interface ICStateHandler : NSObject

+ (void)addStateHandlerWithName:(const char *)a0 stateBlock:(id /* block */)a1;
+ (void)addStateHandlerWithName:(const char *)a0 sysdiagnoseOnly:(BOOL)a1 stateBlock:(id /* block */)a2;

@end
