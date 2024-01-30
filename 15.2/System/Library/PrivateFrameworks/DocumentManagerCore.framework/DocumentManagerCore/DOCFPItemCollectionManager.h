@class NSArray, NSCountedSet;

@interface DOCFPItemCollectionManager : NSObject {
    NSCountedSet *_activeCollections;
}

@property (readonly, copy, nonatomic) NSArray *observingCollections;

+ (id)sharedManager;

- (void)applicationDidEnterBackground;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillEnterForegroundNotification;
- (void)collectionDidStartObserving:(id)a0;
- (void)collectionDidStopObserving:(id)a0;

@end
