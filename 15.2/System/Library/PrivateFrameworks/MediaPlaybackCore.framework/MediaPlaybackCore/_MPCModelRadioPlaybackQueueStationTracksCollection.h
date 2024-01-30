@class ICMutableRadioPlaybackHistory, NSObject, MPPropertySet, NSHashTable, MPCPlaybackRequestEnvironment, MPSectionedCollection, MPCModelGenericAVItemUserIdentityPropertySet;
@protocol OS_dispatch_queue;

@interface _MPCModelRadioPlaybackQueueStationTracksCollection : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_activeModelGenericAVItems;
    BOOL _isSiriInitiated;
    MPPropertySet *_itemProperties;
    ICMutableRadioPlaybackHistory *_playbackHistory;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
}

@property (readonly, nonatomic) ICMutableRadioPlaybackHistory *playbackHistory;
@property (readonly, copy, nonatomic) MPSectionedCollection *trackModels;
@property (readonly, copy, nonatomic) MPSectionedCollection *tracks;
@property (retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
@property (readonly, nonatomic) long long numberOfItems;

- (void).cxx_destruct;
- (id)initWithPlaybackContext:(id)a0;
- (id)AVItemAtIndex:(long long)a0;
- (BOOL)isExplicitItemAtIndex:(long long)a0;
- (long long)removeExplicitItems;
- (id)trackForItemAtIndex:(long long)a0;
- (void)updateWithPersonalizedResponse:(id)a0;

@end
