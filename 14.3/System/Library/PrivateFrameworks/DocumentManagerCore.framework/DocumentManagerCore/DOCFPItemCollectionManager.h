@class NSArray, NSCountedSet;

@interface DOCFPItemCollectionManager : NSObject {
    NSCountedSet *_activeCollections;
}

@property (readonly, copy, nonatomic) NSArray *observingCollections;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForegroundNotification;
- (void)collectionDidStartObserving:(id)a0;
- (void)collectionDidStopObserving:(id)a0;

@end
