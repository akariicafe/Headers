@class NSString;

@interface SBChainableModifierEvent : NSObject <BSDescriptionProviding, NSCopying>

@property (readonly, nonatomic, getter=isHandled) BOOL handled;
@property (readonly, copy, nonatomic) NSString *handledReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loggingCategory;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)handleWithReason:(id)a0;
- (id)unhandledCopy;

@end
