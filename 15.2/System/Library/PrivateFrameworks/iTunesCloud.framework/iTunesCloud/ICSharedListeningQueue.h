@class NSString, NSArray, ICLiveLink, MSVSectionedCollection;

@interface ICSharedListeningQueue : NSObject <NSCopying>

@property (weak, nonatomic) ICLiveLink *liveLink;
@property (readonly, nonatomic) long long serverRevision;
@property (readonly, copy, nonatomic) NSString *serverQueueContext;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long explicitContentState;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) MSVSectionedCollection *tracklist;

- (id)itemForIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0 serverQueueContext:(id)a1 liveLink:(id)a2;
- (id)containerForIdentifier:(id)a0;
- (void)setMediaIdentifiers:(id)a0 preferredStartIndex:(long long)a1;
- (void)replaceTracklist:(id)a0 preferredStartIndexPath:(id)a1 completion:(id /* block */)a2;
- (void)addMediaIdentifiers:(id)a0 afterItemIdentifier:(id)a1;
- (void)insertTracklist:(id)a0 afterItemIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)insertTracklist:(id)a0 atPosition:(id)a1 completion:(id /* block */)a2;
- (void)insertTracklist:(id)a0 atPosition:(id)a1 completionEx:(id /* block */)a2;
- (void)insertTracklist:(id)a0 afterItemIdentifier:(id)a1 playNowWithPreferredStartIndexPath:(id)a2 completion:(id /* block */)a3;
- (void)insertTracklist:(id)a0 afterItemIdentifier:(id)a1 playNowWithPreferredStartIndexPath:(id)a2 completionEx:(id /* block */)a3;
- (void)removeItemIdentifier:(id)a0;
- (void)moveItemIdentifier:(id)a0 beforeItemIdentifier:(id)a1;
- (void)moveItemIdentifier:(id)a0 afterItemIdentifier:(id)a1;
- (void)getExpectedCurrentItemWithCompletion:(id /* block */)a0;
- (long long)_afterItemPositionForItemIdentifier:(id)a0;
- (id)_itemForIdentifier:(id)a0 outIndexPath:(id *)a1;
- (id)_playbackItemProtosForTracklist:(id)a0 withPreferredStartItemIndexPath:(id)a1;
- (id)_tracklistForQueueProto:(id)a0;

@end
