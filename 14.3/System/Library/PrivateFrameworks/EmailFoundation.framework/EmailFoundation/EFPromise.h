@class NSString, EFFuture;

@interface EFPromise : NSObject <EFCancelable>

@property (readonly) EFFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promise;

- (void)cancel;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
