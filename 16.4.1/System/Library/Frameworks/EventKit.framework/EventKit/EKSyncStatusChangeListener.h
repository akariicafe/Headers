@class NSMutableDictionary, EKEventStore;
@protocol EKSyncStatusChangeListenerDelegate;

@interface EKSyncStatusChangeListener : NSObject {
    EKEventStore *_eventStore;
    NSMutableDictionary *_sourceLastSyncingEndDates;
}

@property (weak, nonatomic) id<EKSyncStatusChangeListenerDelegate> delegate;

- (id)initWithEventStore:(id)a0;
- (void)_eventStoreChanged:(id)a0;
- (void).cxx_destruct;
- (void)_setupSources;

@end
