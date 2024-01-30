@class NSString;

@interface SBZStackAuditorParticipantRecord : NSObject <BSDescriptionProviding>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long activationPolicy;
@property (nonatomic) BOOL ownsHomeGesture;
@property (nonatomic) BOOL homeAffordanceSuppressed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)summaryForLogging;
- (id)succinctDescriptionBuilder;

@end
