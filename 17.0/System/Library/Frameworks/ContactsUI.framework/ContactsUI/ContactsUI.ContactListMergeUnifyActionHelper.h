@interface ContactsUI.ContactListMergeUnifyActionHelper : NSObject {
    void /* unknown type, empty encoding */ contactStore;
    void /* unknown type, empty encoding */ contactItems;
    void /* unknown type, empty encoding */ mergeResult;
}

+ (id)descriptorForRequiredKeys;

- (id)init;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyMergeResultToSaveRequest:(id)a0;
- (BOOL)applyUndoTo:(id)a0 and:(id)a1;
- (void)mergeContacts:(id)a0 withContainerIdentifiers:(id)a1 withContactIDToParentGroupsDict:(id)a2;

@end
