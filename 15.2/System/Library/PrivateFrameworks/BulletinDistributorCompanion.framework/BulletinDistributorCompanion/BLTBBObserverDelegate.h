@class NSString;
@protocol BBObserverDelegate, BLTBBObserverDelegateDelegate;

@interface BLTBBObserverDelegate : NSObject <BBObserverDelegate>

@property (weak) id<BBObserverDelegate> actualDelegate;
@property (weak, nonatomic) id<BLTBBObserverDelegateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)observer:(id)a0 noteServerConnectionStateChanged:(BOOL)a1;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
