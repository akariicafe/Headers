@class NAFuture, NSMutableSet, NSMapTable;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItemProvider : HFItemProvider <NSCopying>

@property (readonly, nonatomic) NSMutableSet *logItems;
@property (readonly, nonatomic) NSMapTable *logEntryUniqueIdentifierToLogItemMap;
@property (retain, nonatomic) NAFuture *logFetchFuture;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

+ (BOOL)prefersNonBlockingReloads;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithMediaProfileContainer:(id)a0;
- (id)invalidationReasons;

@end
