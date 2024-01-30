@class NSString;

@interface SXSubscribeActionHandler : NSObject <SXSubscribeActionHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSubscribeActionOnPresenter:(id)a0 completionBlock:(id /* block */)a1;

@end
