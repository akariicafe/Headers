@class NSArray, MPPlaybackArchive, MPMediaItemCollection;

@interface WFPlayMusicActionContent : NSObject

@property (copy, nonatomic) NSArray *storeIDs;
@property (retain, nonatomic) MPMediaItemCollection *mediaCollection;
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive;

- (void).cxx_destruct;
- (id)initWithPlaybackArchive:(id)a0;
- (id)initWithStoreIDs:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)initWithMediaCollection:(id)a0;

@end
