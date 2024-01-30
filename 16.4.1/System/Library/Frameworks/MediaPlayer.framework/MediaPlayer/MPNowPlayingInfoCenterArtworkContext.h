@class NSString, MPMediaItemArtwork, NSData;

@interface MPNowPlayingInfoCenterArtworkContext : NSObject

@property (copy, nonatomic) NSString *artworkIdentifier;
@property (retain, nonatomic) MPMediaItemArtwork *artwork;
@property (retain, nonatomic) NSData *artworkData;

- (void).cxx_destruct;

@end
