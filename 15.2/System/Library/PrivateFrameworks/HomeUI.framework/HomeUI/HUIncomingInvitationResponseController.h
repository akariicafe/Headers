@class NSError, HMIncomingHomeInvitation;
@protocol HUIncomingInvitationResponseControllerDelegate;

@interface HUIncomingInvitationResponseController : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long response;
@property (retain, nonatomic) NSError *error;
@property (readonly, weak, nonatomic) id<HUIncomingInvitationResponseControllerDelegate> delegate;
@property (readonly, nonatomic) HMIncomingHomeInvitation *invitation;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)a0 invitation:(id)a1;
- (id)_acceptInvitation;
- (id)_declineInvitation;
- (void)respondToInvitationWithResponse:(unsigned long long)a0;

@end
