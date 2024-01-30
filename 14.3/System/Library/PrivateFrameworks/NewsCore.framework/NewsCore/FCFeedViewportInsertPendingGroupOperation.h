@class NSSet, FCCloudContext, NSArray, FCFeedGroupEmittingContext, FCFeedDescriptor, FCFeedRefreshSession, FCFeedGroup;
@protocol FCCoreConfiguration;

@interface FCFeedViewportInsertPendingGroupOperation : FCOperation {
    FCFeedRefreshSession *_resultRefreshSession;
    NSArray *_resultUpdatedRefreshSessions;
    FCFeedGroup *_resultInsertedGroup;
    NSSet *_resultDeletedElementIDs;
}

@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (retain, nonatomic) FCFeedRefreshSession *refreshSession;
@property (retain, nonatomic) NSArray *feedGroupEmitters;
@property (retain, nonatomic) FCFeedGroupEmittingContext *groupEmittingContext;
@property (retain, nonatomic) NSArray *internalElements;
@property (copy, nonatomic) id /* block */ insertGroupCompletionHandler;

- (id)_nextGroupToInsert:(id *)a0;
- (void).cxx_destruct;
- (void)_finishWithInsertedGroup:(id)a0 backedByPendingGroup:(id)a1 forEmitter:(id)a2;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
