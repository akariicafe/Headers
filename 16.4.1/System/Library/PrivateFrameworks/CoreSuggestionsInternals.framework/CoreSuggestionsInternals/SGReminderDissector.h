@class NSString, NSMutableDictionary, RTRoutineManager;

@interface SGReminderDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    NSMutableDictionary *_conversations;
    RTRoutineManager *_rtRoutineManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)enrichedTaggedCharacterRangesFromEntity:(id)a0 forMessage:(id)a1;
+ (id)enrichedTaggedCharacterRangesFromTaggedCharacterRanges:(id)a0 messageIsSent:(BOOL)a1;
+ (BOOL)isReminderDueDateComponentsInPast:(id)a0 givenReferenceDate:(id)a1 allDay:(BOOL)a2;
+ (id)getContactIdentifierForName:(id)a0 andEmail:(id)a1 ifMatchingPredicate:(id /* block */)a2;

- (id)reminderTitleFromMessages:(id)a0 forLanguage:(id)a1;
- (id)storageLocationFromDueLocation:(id)a0;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (BOOL)isAllDay:(id)a0;
- (id)_testReminder:(id)a0 entity:(id)a1;
- (id)extractReminderFromMailMessage:(id)a0 entity:(id)a1;
- (id)_reminderEnrichmentWithTitle:(id)a0 dueDateComponents:(id)a1 dueLocationType:(unsigned char)a2 dueLocation:(id)a3 dueLocationTrigger:(unsigned char)a4 sourceURL:(id)a5 reminderStatus:(unsigned char)a6 parentEntity:(id)a7 parentMessage:(id)a8 allDay:(BOOL)a9;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)fetchLocationOfInterestByType:(long long)a0 name:(id)a1;
- (id)conversations;
- (id)extractReminderFromTextMessage:(id)a0 entity:(id)a1 store:(id)a2;
- (BOOL)isValidTextMessageForProcessing:(id)a0;
- (id)processingLanguageForContent:(id)a0;
- (id)initWithConversations:(id)a0 rtRoutineManager:(id)a1;
- (BOOL)mailAddressIsAccountOwner:(id)a0;
- (id)init;
- (id)dueLocationFromMessages:(id)a0;
- (BOOL)_isTestMessage:(id)a0;
- (id)dueDateComponentsFromMessages:(id)a0;
- (id)_reminderMessageForTextMessage:(id)a0 withEntity:(id)a1 extractionModel:(id)a2 processingLanguage:(id)a3 preprocessing:(BOOL)a4;
- (id)reminderTitleForContent:(id)a0;
- (id)_validateDueDateComponents:(id)a0 dueLocation:(id)a1 forReminderMessages:(id)a2;
- (id)_detectedReminderEnrichmentFromReminderMessage:(id)a0 parentEntity:(id)a1 language:(id)a2 parentMessage:(id)a3 startTimeProcessing:(unsigned long long)a4;
- (id)defaultDueDateComponentsFromMessages:(id)a0;
- (void).cxx_destruct;
- (id)extractReminderFromOwnedMailMessage:(id)a0 entity:(id)a1;

@end
