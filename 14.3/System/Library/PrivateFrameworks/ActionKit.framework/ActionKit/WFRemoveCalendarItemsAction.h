@interface WFRemoveCalendarItemsAction : WFAction

@property (nonatomic) unsigned long long requiredConfirmations;
@property (nonatomic) unsigned long long currentConfirmation;

- (unsigned long long)entityType;
- (void)deleteItems:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)accessResource;
- (void)presentConfirmationToDeleteItems:(id)a0;

@end
