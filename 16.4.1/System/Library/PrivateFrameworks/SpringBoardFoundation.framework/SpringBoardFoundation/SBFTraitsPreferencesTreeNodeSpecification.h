@class SBFTraitsParticipant, NSString;

@interface SBFTraitsPreferencesTreeNodeSpecification : NSObject <NSCopying, BSDescriptionProviding>

@property (retain, nonatomic) SBFTraitsParticipant *participant;
@property (retain, nonatomic) SBFTraitsParticipant *parentParticipant;
@property (nonatomic) double order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithParticipant:(id)a0 parentParticipant:(id)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
