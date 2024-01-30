@class NSString, NSUserActivity, NSObject, IMPlayerItem;
@protocol OS_dispatch_queue;

@interface IMPlayerManifest : NSObject

@property (retain, nonatomic) NSUserActivity *activity;
@property (retain, nonatomic) IMPlayerItem *currentItem;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isLoaded;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long currentIndex;

+ (id)_activityType;
+ (void)createManifestForActivity:(id)a0 completion:(id /* block */)a1;
+ (id)activityTypeSuffix;
+ (void)restoreActivity:(id)a0 completion:(id /* block */)a1;
+ (id)supportedActivityTypes;
+ (void)registerManifestForRestoration:(Class)a0;

- (void)load:(id /* block */)a0;
- (void)next;
- (id)init;
- (void).cxx_destruct;
- (void)previous;
- (void)_load:(id /* block */)a0;
- (BOOL)hasNext;
- (id)description;
- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)hasPrevious;
- (void)assertIndexInBounds:(unsigned long long)a0;
- (void)nextManifest:(id /* block */)a0;
- (void)postLoadedAdditionalItemsNotification;
- (void)postManifestDidChangeNotification;

@end
