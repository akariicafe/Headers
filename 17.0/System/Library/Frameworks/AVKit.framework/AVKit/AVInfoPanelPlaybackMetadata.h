@class AVMetadataItem, NSString, NSDateFormatter, NSArray, NSDate;

@interface AVInfoPanelPlaybackMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) AVMetadataItem *titleItem;
@property (readonly, nonatomic) AVMetadataItem *secondaryTitleItem;
@property (readonly, nonatomic) AVMetadataItem *seasonNumberItem;
@property (readonly, nonatomic) AVMetadataItem *episodeNumberItem;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *secondaryTitleString;
@property (readonly, nonatomic) NSString *seasonNumberString;
@property (readonly, nonatomic) NSString *episodeNumberString;
@property (readonly, nonatomic) NSString *seasonEpisodeString;
@property (readonly, nonatomic) NSString *releaseDateString;
@property (readonly, nonatomic, getter=_yearDateFormatter) NSDateFormatter *yearDateFormatter;
@property (readonly, copy, nonatomic) NSArray *metadataItems;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isClosedCaptioned) BOOL closedCaptioned;
@property (readonly, nonatomic, getter=isLivePlayback) BOOL livePlayback;

+ (BOOL)_closedCaptioningStatusForPlayerController:(id)a0;
+ (double)_durationForPlayerController:(id)a0;
+ (void)_loadAssetValues:(id)a0 into:(id)a1 completion:(id /* block */)a2;
+ (id)_metadataItemsForPlayerItem:(id)a0 withAsset:(id)a1;
+ (id)playbackMetadataForPlayerController:(id)a0 fulfillment:(id /* block */)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_releaseDateStringItem;
- (id)initWithPlaybackMetadata:(id)a0;
- (id)initWithPlayerController:(id)a0;
- (id)metadataItemForIdentifiers:(id)a0;

@end
