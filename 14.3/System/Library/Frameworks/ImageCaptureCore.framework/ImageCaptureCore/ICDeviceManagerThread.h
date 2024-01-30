@interface ICDeviceManagerThread : NSThread

+ (void)runBlock:(id /* block */)a0;

- (void)performBlock:(id /* block */)a0;
- (void)main;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(BOOL)a1;

@end
