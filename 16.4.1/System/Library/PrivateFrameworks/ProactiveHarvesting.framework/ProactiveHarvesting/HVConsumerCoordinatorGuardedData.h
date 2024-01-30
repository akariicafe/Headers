@class NSMapTable, HVBudget;

@interface HVConsumerCoordinatorGuardedData : NSObject {
    HVBudget *_budget;
    NSMapTable *_mailConsumers;
    NSMapTable *_messagesConsumers;
    NSMapTable *_newsConsumers;
    NSMapTable *_notesConsumers;
    NSMapTable *_parsecConsumers;
    NSMapTable *_photosConsumers;
    NSMapTable *_remindersConsumers;
    NSMapTable *_safariConsumers;
    NSMapTable *_siriConsumers;
    NSMapTable *_thirdPartyAppConsumers;
    NSMapTable *_interactionConsumers;
    NSMapTable *_userActivityConsumers;
}

- (id)init;
- (void).cxx_destruct;

@end
