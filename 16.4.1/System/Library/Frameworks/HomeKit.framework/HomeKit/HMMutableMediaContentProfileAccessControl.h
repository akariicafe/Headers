@class NSArray;

@interface HMMutableMediaContentProfileAccessControl : HMMediaContentProfileAccessControl

@property (copy) NSArray *accessories;

- (void)setAccessories:(id)a0;
- (void)addAccessory:(id)a0;
- (void)removeAccessory:(id)a0;

@end
