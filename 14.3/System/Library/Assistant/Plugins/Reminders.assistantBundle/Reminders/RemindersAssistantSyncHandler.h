@class NSString, NSMutableArray, EKEventStore;

@interface RemindersAssistantSyncHandler : NSObject <AFSyncHandler>

@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) NSString *finalAnchor;
@property (retain, nonatomic) NSMutableArray *postAnchors;
@property (retain, nonatomic) NSMutableArray *domainObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 forKey:(id)a2 beginInfo:(id)a3;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;
- (id)_sortedArrayOfReminderLists;
- (id)calculateFinalAnchor:(id)a0;
- (id)identifierForCalendar:(id)a0;

@end
