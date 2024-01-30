@class NSString, NSDictionary, NSArray, NSDate, NSSet, FCFeedEdition;
@protocol FCFeedRefreshSessionForYouConfig;

@interface FCFeedRefreshSession : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *refreshDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSDictionary *cursorsByGroupEmitterID;
@property (readonly, copy, nonatomic) NSArray *pendingGroups;
@property (readonly, copy, nonatomic) NSSet *activeGroupEmitterIDs;
@property (readonly, nonatomic) FCFeedEdition *lastCompletedEdition;
@property (readonly, nonatomic) BOOL reachedEnd;
@property (readonly, nonatomic) BOOL isOffline;
@property (readonly, copy, nonatomic) id<FCFeedRefreshSessionForYouConfig> forYouConfig;
@property (readonly, nonatomic) BOOL isNewEdition;

+ (id)currentEditionWithRefreshDate:(id)a0 lastCompletedEdition:(id)a1 fromPaginator:(id)a2;

- (id)copyByRemovingPendingGroupsAtIndexes:(id)a0;
- (id)copyWithAllGroupEmittersExhausted;
- (void).cxx_destruct;
- (id)currentEditionFromPaginator:(id)a0;
- (id)copyWithAdditionalPendingGroups:(id)a0 cursors:(id)a1;
- (id)initWithRefreshDate:(id)a0 activeGroupEmitterIDs:(id)a1 isOffline:(BOOL)a2 forYouConfig:(id)a3;
- (unsigned long long)hash;
- (id)copyWithModificationDate:(id)a0 lastCompletedEdition:(id)a1 cursorsByGroupEmitterID:(id)a2 pendingGroups:(id)a3 activeGroupEmitterIDs:(id)a4 reachedEnd:(BOOL)a5 isOffline:(BOOL)a6;
- (id)copyWithExhaustedGroupEmitterID:(id)a0 cursors:(id)a1;
- (id)description;
- (id)copyByRemovingPendingGroupIdenticalTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 refreshDate:(id)a1 modificationDate:(id)a2 lastCompletedEdition:(id)a3 cursorsByGroupEmitterID:(id)a4 pendingGroups:(id)a5 activeGroupEmitterIDs:(id)a6 reachedEnd:(BOOL)a7 isOffline:(BOOL)a8 forYouConfig:(id)a9;

@end
