@class NSString;

@interface _IDSPasswordManager : NSObject <_IDSPasswordManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPassword:(id)a0 forUsername:(id)a1 onService:(id)a2 completionBlock:(id /* block */)a3;

@end
