@class NSString;

@interface OS_xpc_uint64 : OS_xpc_object <OS_xpc_uint64>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)retain;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;

@end
