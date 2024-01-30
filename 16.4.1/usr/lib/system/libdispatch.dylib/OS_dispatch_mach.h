@class NSString;

@interface OS_dispatch_mach : OS_dispatch_object <OS_dispatch_mach>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)release;
- (void)_xref_dispose;
- (id)init;

@end
