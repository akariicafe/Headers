@class NSString;

@interface OS_sysmon_request : OS_sysmon_object <OS_sysmon_request>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)release;
- (void)dealloc;

@end
