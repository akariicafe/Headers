@class NSString;

@interface OS_dispatch_io : OS_dispatch_object <OS_dispatch_io>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
