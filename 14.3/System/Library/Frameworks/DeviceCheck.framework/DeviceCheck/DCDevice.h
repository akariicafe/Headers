@interface DCDevice : NSObject

@property (class, readonly) DCDevice *currentDevice;

@property (readonly, getter=isSupported) BOOL supported;

- (BOOL)_isSupportedReturningError:(id *)a0;
- (void)generateTokenWithCompletionHandler:(id /* block */)a0;

@end
