@class NSSet;

@interface BKSMutableHIDEventKeyCommandsDispatchingPredicate : BKSHIDEventKeyCommandsDispatchingPredicate

@property (copy, nonatomic) NSSet *senderDescriptors;
@property (copy, nonatomic) NSSet *displays;

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplays:(id)a0;
- (void)setSenderDescriptors:(id)a0;

@end
