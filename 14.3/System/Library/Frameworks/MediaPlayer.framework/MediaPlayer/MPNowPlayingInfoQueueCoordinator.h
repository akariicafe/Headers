@class NSArray, NSString, MPAVItem;
@protocol MPAVQueueCoordinatingDataSource;

@interface MPNowPlayingInfoQueueCoordinator : NSObject <MPAVQueueCoordinating>

@property (readonly, weak, nonatomic) id<MPAVQueueCoordinatingDataSource> dataSource;
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (nonatomic) BOOL shouldExpectEmptyQueue;
@property (nonatomic) BOOL shouldDeferItemLoading;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
