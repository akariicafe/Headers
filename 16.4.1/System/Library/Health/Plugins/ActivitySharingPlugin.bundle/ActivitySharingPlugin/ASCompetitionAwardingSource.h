@class NSString, NSObject;
@protocol OS_dispatch_queue, ASCompetitionAwardingSourceDataProvider;

@interface ASCompetitionAwardingSource : NSObject <ACHEarnedInstanceAwarding> {
    unsigned char _creatorDevice;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (weak, nonatomic) id<ASCompetitionAwardingSourceDataProvider> dataProvider;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)earnedInstancesForHistoricalInterval:(id)a0 databaseContext:(id)a1;
- (void).cxx_destruct;
- (id)_allCompetitionsOrderedByEndDate;
- (id)_queue_earnedInstancesForInterval:(id)a0 selectingCompetitionsUsingFilter:(id /* block */)a1;
- (id)earnedInstancesForIncrementalInterval:(id)a0;
- (id)initForCreatorDevice:(unsigned char)a0;

@end
