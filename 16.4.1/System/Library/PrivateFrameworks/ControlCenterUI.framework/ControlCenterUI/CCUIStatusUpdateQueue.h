@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject {
    NSMutableArray *_queuedIdentifiers;
    NSMutableDictionary *_latestUpdateByIdentifier;
}

- (void)removeAllStatusUpdates;
- (id)dequeueNextStatusUpdate;
- (void)enqueueStatusUpdate:(id)a0 forIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
