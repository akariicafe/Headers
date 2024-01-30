@class NSString;

@interface POPlayPodcastEpisode : SAMPPlayPodcastEpisode <AFServiceCommand>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_validate;
- (void)performWithCompletion:(id /* block */)a0 serviceHelper:(id)a1;
- (id)_playbackRequestIdentifier;

@end
