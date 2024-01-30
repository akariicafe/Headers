@class PKAppletSubcredential, NSMutableDictionary, NSMutableArray;

@interface PKSharedCredentialGroupMap : NSObject {
    NSMutableDictionary *_groupIdentifierToGroupNumber;
    NSMutableDictionary *_sharingSessionToGroupNumber;
    NSMutableDictionary *_recipientIdentifierToGroupNumber;
    NSMutableDictionary *_groupNumberToSharedCredentials;
    NSMutableDictionary *_groupNumberToInvitationReceipts;
    NSMutableArray *_notGroupedSharedCredentials;
    NSMutableArray *_notGroupedInvitationReceipts;
    long long _groupCount;
    PKAppletSubcredential *_credential;
}

- (id)initWithCredential:(id)a0;
- (void)insertSharedCredential:(id)a0;
- (void)insertInvitationReceipt:(id)a0;
- (void)insertSharedCredential:(id)a0 intoGroup:(id)a1;
- (id)groupNumberWithGroupIdentifier:(id)a0 sharingSessionIdentifier:(id)a1 recipientIdentifier:(id)a2;
- (void)assignGroupNumber:(id)a0 toGroupIdentifier:(id)a1 sharingSessionIdentifier:(id)a2 recipientIdentifier:(id)a3;
- (void)insertInvitationReceipt:(id)a0 intoGroup:(id)a1;
- (void).cxx_destruct;
- (id)groups;

@end
