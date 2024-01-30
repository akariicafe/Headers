@class NSSet;

@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate

@property (copy, nonatomic) NSSet *senderDescriptors;
@property (copy, nonatomic) NSSet *descriptors;
@property (copy, nonatomic) NSSet *displays;

+ (id)new;
+ (id)defaultSystemPredicate;
+ (id)defaultFocusPredicate;

- (void)setDescriptors:(id)a0;
- (void)setSenderDescriptors:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplays:(id)a0;

@end
