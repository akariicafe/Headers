@class NSIndexPath, MSVSectionedCollection;

@interface _MPCSharedListeningTracklistPlaybackContext : MPPlaybackContext

@property (retain, nonatomic) MSVSectionedCollection *tracklist;
@property (retain, nonatomic) NSIndexPath *startItemIndexPath;

- (void).cxx_destruct;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)a0;

@end
