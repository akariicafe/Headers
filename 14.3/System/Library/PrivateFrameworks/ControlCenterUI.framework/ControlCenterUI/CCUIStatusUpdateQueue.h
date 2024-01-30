@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject {
    NSMutableArray *_queuedIdentifiers;
    NSMutableDictionary *_latestUpdateByIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeAllStatusUpdates;
- (void)enqueueStatusUpdate:(id)a0 forIdentifier:(id)a1;
- (id)dequeueNextStatusUpdate;

@end
