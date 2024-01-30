@class NSMapTable, NSMutableSet;

@interface PPNotificationHandlerGuardedData : NSObject {
    BOOL _delayedFiringInProgress;
    double _lastFiringTimeSince1970;
    NSMapTable *_blockMap;
    NSMutableSet *_objects;
}

- (void).cxx_destruct;
- (id)init;

@end
