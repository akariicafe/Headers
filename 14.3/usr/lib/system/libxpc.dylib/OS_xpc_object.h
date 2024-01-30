@class NSString;

@interface OS_xpc_object : OS_object <OS_xpc_object>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
