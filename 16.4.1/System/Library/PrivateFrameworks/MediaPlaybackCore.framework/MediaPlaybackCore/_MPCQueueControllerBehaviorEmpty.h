@class NSString;
@protocol MPCQueueControllerBehaviorHost;

@interface _MPCQueueControllerBehaviorEmpty : NSObject <MPCQueueControllerBehaviorImplementation> {
    NSString *_identifier;
}

@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, weak, nonatomic) id<MPCQueueControllerBehaviorHost> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canLoadQueue:(id)a0 reason:(id *)a1;

- (id)initWithSessionID:(id)a0;
- (void).cxx_destruct;
- (id)_stateDictionaryIncludingQueue:(BOOL)a0;
- (id)contentItemIDEnumeratorStartingAfterContentItemID:(id)a0 mode:(long long)a1 options:(unsigned long long)a2;
- (id)_itemForContentItemID:(id)a0;
- (void)activeItemFlagsDidChange:(unsigned short)a0;
- (BOOL)canJumpToContentItemID:(id)a0 reason:(id *)a1;
- (BOOL)canNextItemFromContentItemID:(id)a0 reason:(id *)a1;
- (BOOL)canPreviousItemFromContentItemID:(id)a0 reason:(id *)a1;
- (id)componentsForContentItemID:(id)a0;
- (void)connectToHost:(id)a0;
- (void)currentItemDidChangeFromContentItemID:(id)a0 toContentItemID:(id)a1;
- (void)disconnectFromHost:(id)a0;
- (BOOL)itemExistsForContentItemID:(id)a0;
- (id)performLoadCommand:(id)a0 completion:(id /* block */)a1;

@end
