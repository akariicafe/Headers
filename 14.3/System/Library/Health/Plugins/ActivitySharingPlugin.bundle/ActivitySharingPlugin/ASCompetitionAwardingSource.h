@class NSString, NSSet, NSObject;
@protocol OS_dispatch_queue, ASCompetitionAwardingSourceDataProvider;

@interface ASCompetitionAwardingSource : NSObject <ACHEarnedInstanceAwarding> {
    unsigned char _creatorDevice;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSSet *_awardedCompetitionUUIDs;
}

@property (weak, nonatomic) id<ASCompetitionAwardingSourceDataProvider> dataProvider;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)earnedInstancesForHistoricalInterval:(id)a0 databaseContext:(id)a1;
- (id)_queue_earnedInstancesForInterval:(id)a0 selectingCompetitionsUsingFilter:(id /* block */)a1;
- (id)_allCompetitionsOrderedByEndDate;
- (id)initForCreatorDevice:(unsigned char)a0;
- (id)earnedInstancesForIncrementalInterval:(id)a0;

@end
