@class NSArray, NSCountedSet;

@interface DOCFPItemCollectionManager : NSObject {
    NSCountedSet *_activeCollections;
}

@property (readonly, copy, nonatomic) NSArray *observingCollections;
@property (readonly, nonatomic) NSArray *notificationObservances;

+ (id)sharedManager;

- (void)applicationDidEnterBackground;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)applicationWillEnterForegroundNotification;
- (void)collectionDidStartObserving:(id)a0;
- (void)collectionDidStopObserving:(id)a0;

@end
