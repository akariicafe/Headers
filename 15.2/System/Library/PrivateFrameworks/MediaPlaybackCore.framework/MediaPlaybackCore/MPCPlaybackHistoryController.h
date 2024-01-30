@class NSString, MPCPlaybackEngine, NSOperationQueue, MPModelPlayEvent;

@interface MPCPlaybackHistoryController : NSObject <MPCPlaybackEngineEventObserving>

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) MPModelPlayEvent *lastRecordedPlayEvent;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)engine:(id)a0 willChangeToItem:(id)a1 fromItem:(id)a2;
- (void).cxx_destruct;
- (id)initWithPlaybackEngine:(id)a0;

@end
