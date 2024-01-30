@class NSSet;

@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate

@property (copy, nonatomic) NSSet *senderDescriptors;
@property (copy, nonatomic) NSSet *descriptors;
@property (copy, nonatomic) NSSet *displays;

+ (id)defaultFocusPredicate;
+ (id)defaultSystemPredicate;
+ (id)new;

- (void)setSenderDescriptors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDescriptors:(id)a0;
- (id)init;
- (void)setDisplays:(id)a0;

@end
