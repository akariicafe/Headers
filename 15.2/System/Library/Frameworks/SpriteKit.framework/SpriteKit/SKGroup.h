@class NSArray;

@interface SKGroup : SKAction {
    void *_mycaction;
    NSArray *_actions;
}

+ (BOOL)supportsSecureCoding;
+ (id)groupWithActions:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)subactions;
- (BOOL)finished;
- (id)reversedAction;

@end
