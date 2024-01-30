@class NSArray, NSString, MPAVItem;
@protocol MFPlaybackStackController, MFQueueManagement;

@interface MPCMediaFoundationQueueCoordinator : NSObject <MPAVQueueCoordinating>

@property (readonly, weak, nonatomic) id<MFPlaybackStackController, MFQueueManagement> playbackStackController;
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (nonatomic) BOOL shouldExpectEmptyQueue;
@property (nonatomic) BOOL shouldDeferItemLoading;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
