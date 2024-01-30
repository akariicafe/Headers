@class NSArray;

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (getter=isEnabled) BOOL enabled;
@property BOOL allowUnauthenticatedRequests;
@property (copy) NSArray *accessories;

- (void)setOptions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAccessory:(id)a0;
- (void)addAccessory:(id)a0;
- (unsigned long long)options;

@end
