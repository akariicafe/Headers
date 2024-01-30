@class NSNumber, NSSet, EKEventStore, NSMutableArray, CUIKObjectGroup;

@interface CUIKEditingContextGroup : NSObject

@property (retain) CUIKObjectGroup *objectGroup;
@property (retain) NSMutableArray *additionalObjectGroups;
@property (retain) NSSet *openContexts;
@property (retain) NSNumber *spanDecisionAsNumber;
@property (retain) NSNumber *earlyCommitDecisionAsNumber;
@property (weak) EKEventStore *eventStore;

- (void).cxx_destruct;

@end
