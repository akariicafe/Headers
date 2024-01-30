@class NSString;

@interface TIKeyboardInteractionProtocolEventAcceptingCandidateWithTrigger : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>

@property (readonly, nonatomic) NSString *candidateAcceptedTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)sendTo:(id)a0;
- (id)initWithCandidateAcceptedTrigger:(id)a0;

@end
