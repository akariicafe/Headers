@class NSURL, NSNumber;

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSURL *stationURL;
@property (readonly, nonatomic, getter=isRequestingPlaybackInitialization) BOOL requestingPlaybackInitialization;
@property (readonly, nonatomic) NSNumber *privateListeningOverride;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;

@end
