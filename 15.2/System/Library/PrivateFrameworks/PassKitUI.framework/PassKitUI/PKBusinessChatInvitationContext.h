@class PKFeatureApplication, NSString, NSArray, PKAccount;

@interface PKBusinessChatInvitationContext : NSObject <PKBusinessChatContext> {
    NSString *_businessChatIdentifier;
    PKAccount *_account;
    PKFeatureApplication *_invitation;
    NSArray *_pendingInvitations;
    NSArray *_featureApplications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresAuthorization;
- (void).cxx_destruct;
- (id)bodyText;
- (id)businessIdentifier;
- (id)intentParameters;
- (id)groupParameters;
- (id)initWithBusinessChatIdentifier:(id)a0 account:(id)a1 invitation:(id)a2 pendingInvitations:(id)a3 featureApplications:(id)a4;

@end
