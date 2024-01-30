@class NSString, MPCPlaybackEngine, NSOperationQueue, MPModelPlayEvent;

@interface MPCPlaybackHistoryController : NSObject <MPCPlaybackEngineEventObserving>

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) MPModelPlayEvent *lastRecordedPlayEvent;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlaybackEngine:(id)a0;
- (void).cxx_destruct;
- (void)engine:(id)a0 willChangeToItem:(id)a1 fromItem:(id)a2;

@end
