@class EKEvent;

@interface WFCalendarEventContentItem : WFCalendarItemContentItem

@property (readonly, nonatomic) EKEvent *event;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (id)defaultSourceForRepresentation:(id)a0;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)hasLibrary;
+ (id)itemWithEKEvent:(id)a0 fromEventStore:(id)a1;
+ (id)datebyApplyingComponents:(id)a0 toDateComponents:(id)a1;

- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)changeTransaction;

@end
