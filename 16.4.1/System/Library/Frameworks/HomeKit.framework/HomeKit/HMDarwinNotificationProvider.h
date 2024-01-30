@class NSString;

@interface HMDarwinNotificationProvider : HMFObject <HMDarwinNotificationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)notifyRegisterDispatch:(const char *)a0 outToken:(int *)a1 queue:(id)a2 handler:(id /* block */)a3;
- (unsigned int)notifyPost:(const char *)a0;
- (unsigned int)notifyGetState:(int)a0 state:(unsigned long long *)a1;
- (unsigned int)notifySetState:(int)a0 state:(unsigned long long)a1;
- (unsigned int)notifyCancel:(int)a0;
- (unsigned int)notifyRegisterCheck:(const char *)a0 outToken:(int *)a1;
- (BOOL)notifyIsValidToken:(int)a0;

@end
