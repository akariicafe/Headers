@class NSString;

@interface SBChainableModifierEvent : NSObject <BSDescriptionProviding, NSCopying>

@property (readonly, nonatomic, getter=isHandled) BOOL handled;
@property (readonly, copy, nonatomic) NSString *handledReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)loggingCategory;
- (id)unhandledCopy;
- (void)handleWithReason:(id)a0;

@end
