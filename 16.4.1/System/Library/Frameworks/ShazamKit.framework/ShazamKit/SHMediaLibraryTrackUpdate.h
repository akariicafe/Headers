@class SHMediaItem, SHMediaLibraryTrack;

@interface SHMediaLibraryTrackUpdate : NSObject

@property (readonly, nonatomic) SHMediaLibraryTrack *trackToUpdate;
@property (readonly, nonatomic) SHMediaItem *updatedMediaItem;

- (void).cxx_destruct;
- (id)initWithTrackToUpdate:(id)a0 updatedMediaItem:(id)a1;

@end
