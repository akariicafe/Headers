@class NSString, FCReadingList, NSSet;

@interface FCSavedStoriesGroupEmitter : NSObject <FCFeedGroupEmitting>

@property (class, readonly, copy, nonatomic) NSString *groupEmitterIdentifier;

@property (nonatomic) unsigned long long minPrecedingTopicGroups;
@property (nonatomic) long long desiredArticlesCount;
@property (retain, nonatomic) FCReadingList *readingList;
@property (readonly, copy, nonatomic) NSSet *emittableGroupTypes;
@property (readonly, nonatomic) BOOL shouldEmitContentInFavoritesOnlyMode;
@property (readonly, nonatomic) BOOL emitsSingletonGroups;
@property (readonly, nonatomic) BOOL emitsSingleRefreshSessionGroups;
@property (readonly, nonatomic) long long requiredForYouContentTypes;
@property (readonly, nonatomic) BOOL requiresHeavyweightContent;
@property (readonly, nonatomic) BOOL isRequiredByFollowingEmitters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDesiredArticlesCount:(long long)a0;
- (void).cxx_destruct;
- (BOOL)wantsToInsertGroupInContext:(id)a0;
- (BOOL)wantsToEmitGroupInContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2;
- (id)backingChannelTagIDWithConfiguration:(id)a0;
- (id)operationToEmitGroupWithContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2;

@end
