@class NSString;

@interface RCOperationImmediateRetrySignal : NSObject <RCOperationRetrySignal>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onQueue:(id)a0 signal:(id /* block */)a1;

@end
