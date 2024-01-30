@class NSArray, CSIndexJob;

@interface SPCoreSpotlightIndexerTask : NSObject

@property (readonly, nonatomic) CSIndexJob *job;
@property (readonly, nonatomic) NSArray *indexers;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *completedBundleIDs;
@property (nonatomic) unsigned long long dataMigrationStage;
@property (nonatomic) BOOL shouldResumeOnFailure;

- (id)initWithIndexJob:(id)a0 indexers:(id)a1;
- (void).cxx_destruct;

@end
