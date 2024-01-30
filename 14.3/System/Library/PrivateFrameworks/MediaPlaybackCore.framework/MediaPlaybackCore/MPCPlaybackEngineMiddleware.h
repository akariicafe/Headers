@class NSString, NSArray, MPCPlaybackEngine;

@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, _MPCStateDumpPropertyListTransformable, MPMiddleware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *invalidationObservers;

- (id)_stateDumpObject;
- (void).cxx_destruct;
- (id)playerVideoView:(id)a0 chain:(id)a1;
- (id)operationsForPlayerRequest:(id)a0;
- (id)videoOutput:(id)a0 chain:(id)a1;
- (id)operationsForRequest:(id)a0;

@end
