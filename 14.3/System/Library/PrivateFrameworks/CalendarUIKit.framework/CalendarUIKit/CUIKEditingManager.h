@class NSMutableDictionary, EKEventStore, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CUIKEditingManager : NSObject

@property (weak) EKEventStore *eventStore;
@property (retain) NSMutableSet *editingContextGroups;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSMutableDictionary *changeHistory;
@property (retain) NSMutableDictionary *changedObjectMap;

- (void).cxx_destruct;

@end
