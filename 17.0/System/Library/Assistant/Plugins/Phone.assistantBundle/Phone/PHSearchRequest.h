@class VMVoicemailManager, NSArray, NSSet, CHManager, NSMutableDictionary, NSString;

@interface PHSearchRequest : SAPhoneSearch <AFServiceCommand>

@property (retain, nonatomic) VMVoicemailManager *voicemailManager;
@property (retain, nonatomic) CHManager *recentsManager;
@property (readonly, copy, nonatomic) NSArray *voicemails;
@property (readonly, copy, nonatomic) NSArray *recentCalls;
@property (readonly, nonatomic) BOOL didSpecifyContacts;
@property (readonly, copy, nonatomic) NSSet *specifiedContactIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *contactsByVoicemailIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)phoneCallHistoryFromRecentCall:(id)a0;
- (void)cacheContactsForVoicemails:(id)a0;
- (id)labelForEmailAddress:(id)a0;
- (id)labelForPhoneNumber:(id)a0;
- (id)personFromRawAddress:(id)a0;
- (id)phoneVoiceMailFromVMVoicemail:(id)a0;
- (id)recentCallsFilterPredicate;
- (id)typedDataForRawAddress:(id)a0;
- (id)voicemailFilterPredicate;

@end
