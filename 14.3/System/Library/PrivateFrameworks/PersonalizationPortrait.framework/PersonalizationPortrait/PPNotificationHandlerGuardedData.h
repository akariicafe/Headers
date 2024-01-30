@class NSMapTable, NSMutableSet;

@interface PPNotificationHandlerGuardedData : NSObject {
    BOOL _delayedFiringInProgress;
    double _lastFiringTimeSince1970;
    NSMapTable *_blockMap;
    NSMutableSet *_objects;
}

- (id)init;
- (void).cxx_destruct;

@end
