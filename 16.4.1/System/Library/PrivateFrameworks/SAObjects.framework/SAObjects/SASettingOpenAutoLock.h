@interface SASettingOpenAutoLock : SASettingOpenSettings

+ (id)openAutoLock;
+ (id)openAutoLockWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
