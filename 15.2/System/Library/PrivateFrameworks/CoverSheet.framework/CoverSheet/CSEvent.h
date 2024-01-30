@class NSNumber;

@interface CSEvent : NSObject

@property (nonatomic) long long type;
@property (nonatomic, getter=isConsumable) BOOL consumable;
@property (nonatomic, getter=isStateless) BOOL stateless;
@property (retain, nonatomic) NSNumber *value;

+ (id)eventWithType:(long long)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
