@interface EDPopulateSendersTableMigrationStep : NSObject

+ (id)_combineDictionary:(id)a0 withDictionary:(id)a1;
+ (BOOL)runWithConnection:(id)a0 sentMailboxURLs:(id)a1 contactStore:(id)a2;
+ (id)_addressesForSenderIDs:(id)a0 withConnection:(id)a1;
+ (id)_allSenderAddressIDsWithConnection:(id)a0 sentMailboxURLStrings:(id)a1;
+ (BOOL)_clearSendersAddressesTableWithConnection:(id)a0;
+ (BOOL)_clearSendersTableWithConnection:(id)a0;
+ (BOOL)_insertGroupedSendersWithoutContact:(id)a0 withConnection:(id)a1;
+ (BOOL)_insertSenderWithAddresses:(id)a0 contact:(id)a1 connection:(id)a2 error:(id *)a3;
+ (BOOL)_insertSendersGroupedByContact:(id)a0 withConnection:(id)a1;
+ (id)_senderIDsGroupedByContactsForEmailAddressesByContact:(id)a0 withConnection:(id)a1;
+ (id)_senderIDsGroupedByContactsForSenderAddressesToIDs:(id)a0 withContactStore:(id)a1 unmatchedEmailAddresses:(id *)a2 otherEmailAddressesByContact:(id *)a3;
+ (id)_senderIDsGroupedBySimpleAddressForEmailAddresses:(id)a0 senderIDsByEmailAddress:(id)a1;

@end
