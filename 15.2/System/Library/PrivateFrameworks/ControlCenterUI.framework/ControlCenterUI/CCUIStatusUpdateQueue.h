@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject {
    NSMutableArray *_queuedIdentifiers;
    NSMutableDictionary *_latestUpdateByIdentifier;
}

- (void)removeAllStatusUpdates;
- (void).cxx_destruct;
- (id)init;
- (id)dequeueNextStatusUpdate;
- (void)enqueueStatusUpdate:(id)a0 forIdentifier:(id)a1;

@end
