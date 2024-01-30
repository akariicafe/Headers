@class NSArray;

@interface SCNActionSequence : SCNAction {
    void *_mycaction;
    NSArray *_actions;
}

+ (BOOL)supportsSecureCoding;
+ (id)sequenceWithActions:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isCustom;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)reversedAction;

@end
