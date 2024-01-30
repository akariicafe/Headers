@class NSString;

@interface OS_dispatch_queue_cooperative : OS_dispatch_queue <OS_dispatch_queue_cooperative>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
