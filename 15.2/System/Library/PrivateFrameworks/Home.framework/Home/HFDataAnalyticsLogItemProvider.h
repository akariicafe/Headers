@class NAFuture, NSMutableSet, NSMapTable;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItemProvider : HFItemProvider <NSCopying>

@property (readonly, nonatomic) NSMutableSet *logItems;
@property (readonly, nonatomic) NSMapTable *logEntryUniqueIdentifierToLogItemMap;
@property (retain, nonatomic) NAFuture *logFetchFuture;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

+ (BOOL)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)initWithMediaProfileContainer:(id)a0;

@end
