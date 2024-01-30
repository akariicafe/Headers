@class NSArray, GKTournamentParticipantRequestInternal;

@interface GKTournamentParticipantRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) GKTournamentParticipantRequestInternal *internal;
@property (retain, nonatomic) NSArray *participantStates;
@property (nonatomic) BOOL friendsOnly;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)encodeWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;

@end
