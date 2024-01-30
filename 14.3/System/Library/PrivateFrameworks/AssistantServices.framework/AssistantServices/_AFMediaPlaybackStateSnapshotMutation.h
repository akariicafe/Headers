@class NSString, AFMediaPlaybackStateSnapshot, NSDate;

@interface _AFMediaPlaybackStateSnapshotMutation : NSObject <AFMediaPlaybackStateSnapshotMutating> {
    AFMediaPlaybackStateSnapshot *_baseModel;
    long long _playbackState;
    NSDate *_nowPlayingTimestamp;
    NSString *_mediaType;
    NSString *_groupIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasPlaybackState : 1; unsigned char hasNowPlayingTimestamp : 1; unsigned char hasMediaType : 1; unsigned char hasGroupIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMediaType:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setGroupIdentifier:(id)a0;
- (void)setNowPlayingTimestamp:(id)a0;
- (void)setPlaybackState:(long long)a0;
- (id)initWithBaseModel:(id)a0;

@end
