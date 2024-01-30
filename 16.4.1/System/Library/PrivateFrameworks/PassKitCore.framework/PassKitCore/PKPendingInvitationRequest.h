@class PKAppletSubcredentialSharingInvitation;

@interface PKPendingInvitationRequest : NSObject {
    id /* block */ _completion;
}

@property (readonly, nonatomic) PKAppletSubcredentialSharingInvitation *invitation;

- (void).cxx_destruct;
- (id)initWithInvitation:(id)a0 completion:(id /* block */)a1;
- (void)invokeCompletionWithInvitation:(id)a0 error:(id)a1;

@end
