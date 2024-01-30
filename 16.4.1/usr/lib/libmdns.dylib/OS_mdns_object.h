@class NSString;

@interface OS_mdns_object : OS_object <OS_mdns_object>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redactedDescription;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
