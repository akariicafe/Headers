@class NSString, NSArray;

@interface BSPluginSpecification : NSObject <BSDescriptionProviding> {
    NSArray *_allowListedNames;
    NSString *_type;
    NSString *_classOrProtocolName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
