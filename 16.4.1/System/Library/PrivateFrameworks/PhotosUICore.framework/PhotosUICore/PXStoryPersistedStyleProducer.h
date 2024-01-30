@class NSObject;
@protocol OS_os_log, PXStorySongResource, PXStoryAutoEditDecisionList, PFStoryRecipe;

@interface PXStoryPersistedStyleProducer : NSObject <PXStoryStylesProducer> {
    NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) id<PFStoryRecipe> persistedRecipe;
@property (readonly, nonatomic) id<PXStorySongResource> songResource;
@property (readonly, copy, nonatomic) id<PXStoryAutoEditDecisionList> autoEditDecisionList;

- (void).cxx_destruct;
- (id)initWithPersistedRecipe:(id)a0 songResource:(id)a1 autoEditDecisionList:(id)a2;
- (id)requestStylesWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
