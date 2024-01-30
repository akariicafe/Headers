@class SCRTaskIdentifier, NSString, SCRTaskHandler, NSMutableDictionary, SCRTaskTargetConfiguration, SCRSchedulingConfiguration;

@interface SCRTask : NSObject <BSDescriptionProviding, NSCopying, SCRSchedulable> {
    NSMutableDictionary *_attributes;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ workItem;
@property (retain, nonatomic) SCRTaskIdentifier *identifier;
@property (copy, nonatomic) SCRTaskHandler *taskHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy) SCRSchedulingConfiguration *schedulingConfiguration;
@property (copy) SCRTaskTargetConfiguration *targetConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributeForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addAttribute:(id)a0 withKey:(id)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeAttributeWithKey:(id)a0;
- (id)succinctDescriptionBuilder;

@end
