@class NSString;

@interface CSListItemSection : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL supportsViewGrouping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithIdentifier:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
