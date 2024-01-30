@class NSString, ACActivityDescriptor;

@interface SBActivityItem : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) ACActivityDescriptor *descriptor;
@property (readonly, nonatomic) double relevanceScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 descriptor:(id)a1 relevanceScore:(double)a2;

@end
