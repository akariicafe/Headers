@class NSArray, CNUICoreContactScratchpad;

@interface CNUICoreContactEditingSession : NSObject

@property (retain, nonatomic) CNUICoreContactScratchpad *contactsAdded;
@property (retain, nonatomic) CNUICoreContactScratchpad *contactsUpdated;
@property (retain, nonatomic) CNUICoreContactScratchpad *contactsRemoved;
@property (readonly, nonatomic) NSArray *addedContacts;
@property (readonly, nonatomic) NSArray *updatedContacts;
@property (readonly, nonatomic) NSArray *removedContacts;
@property (readonly, nonatomic) BOOL inProgress;

+ (BOOL)isEdiingStateOfContactValid:(long long)a0;

- (id)updatedContactsMatchingContacts:(id)a0;
- (BOOL)containsUpdatedContactMatchingContact:(id)a0;
- (id)description;
- (void)updateContacts:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addContacts:(id)a0;
- (void)removeContacts:(id)a0;
- (long long)editingStateOfContact:(id)a0;
- (void)verifyConsistencyOfEditingSessionForContact:(id)a0;
- (BOOL)isContactUnseen:(id)a0;
- (BOOL)wasContactAdded:(id)a0;
- (BOOL)wasContactUpdated:(id)a0;
- (BOOL)wasContactRemoved:(id)a0;
- (BOOL)containsAddedContactMatchingContact:(id)a0;
- (BOOL)containsRemovedContactMatchingContact:(id)a0;
- (id)addedContactsMatchingContacts:(id)a0;
- (id)removedContactsMatchingContacts:(id)a0;
- (id)generateSaveRequest;
- (id)applyChangesToContacts:(id)a0;

@end
