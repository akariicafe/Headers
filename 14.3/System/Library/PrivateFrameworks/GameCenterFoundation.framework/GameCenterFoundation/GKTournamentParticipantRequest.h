@class NSArray, GKTournamentParticipantRequestInternal;

@interface GKTournamentParticipantRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) GKTournamentParticipantRequestInternal *internal;
@property (retain, nonatomic) NSArray *participantStates;
@property (nonatomic) BOOL friendsOnly;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
