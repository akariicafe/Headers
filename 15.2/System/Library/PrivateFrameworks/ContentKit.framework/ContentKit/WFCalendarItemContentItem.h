@class NSString, EKCalendarItem, EKEventStore;

@interface WFCalendarItemContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) EKCalendarItem *calendarItem;
@property (readonly, nonatomic) NSString *location;

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)propertyBuilders;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)attachments;
- (void).cxx_destruct;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)copyStateToItem:(id)a0;
- (id)changeTransaction;

@end
