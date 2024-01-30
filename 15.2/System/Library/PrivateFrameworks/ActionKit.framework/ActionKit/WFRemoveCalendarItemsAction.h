@interface WFRemoveCalendarItemsAction : WFAction

- (unsigned long long)entityType;
- (void)deleteItems:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (Class)contentItemClass;
- (id)accessResource;

@end
