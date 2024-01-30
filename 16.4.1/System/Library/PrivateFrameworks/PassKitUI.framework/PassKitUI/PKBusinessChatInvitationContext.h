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
- (id)bodyText;
- (void).cxx_destruct;
- (id)groupParameters;
- (id)businessIdentifier;
- (id)initWithBusinessChatIdentifier:(id)a0 account:(id)a1 invitation:(id)a2 pendingInvitations:(id)a3 featureApplications:(id)a4;
- (id)intentParameters;

@end
