@class NSArray, NSSet, NSString;

@interface _MPCPlayerInsertItemsCommand : _MPCPlayerCommand <MPCPlayerInsertItemsCommand>

@property (copy, nonatomic) NSArray *devices;
@property (nonatomic) BOOL supportsCreateStation;
@property (retain, nonatomic) NSSet *supportedInsertionPositions;
@property (retain, nonatomic) NSSet *supportedQueueTypes;
@property (retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)insertPlaybackIntent:(id)a0 afterItem:(id)a1;
- (id)insertAfterPlayingItemWithPlaybackIntent:(id)a0;
- (id)insertAtEndOfTracklistWithPlaybackIntent:(id)a0;
- (BOOL)_isSupportedPlaybackIntent:(id)a0 forRemotePlayer:(BOOL)a1 atInsertionPosition:(int)a2;
- (id)_createRadioStationCommandRequest;
- (id)_insertWithOptions:(id)a0;

@end
