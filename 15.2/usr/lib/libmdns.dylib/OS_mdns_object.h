@class NSString;

@interface OS_mdns_object : OS_object <OS_mdns_object>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (void)dealloc;

@end
