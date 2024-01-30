@class NSArray;

@interface HMMutableUserListeningHistoryUpdateControl : HMUserListeningHistoryUpdateControl

@property (copy) NSArray *accessories;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAccessory:(id)a0;
- (void)removeAccessory:(id)a0;
- (id)initWithAccessories:(id)a0;

@end
