@class NSString, UIImage, MPNowPlayingContentItem, NSDate;

@interface _MPCPlaybackSessionArchive : MSVSegmentedCodingPackage

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) MPNowPlayingContentItem *contentItem;
@property (copy, nonatomic) UIImage *artworkImage;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;

+ (id)packageTypeIdentifier;

- (id)initWithURL:(id)a0;
- (BOOL)saveWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 identifier:(id)a1;
- (unsigned long long)hash;
- (BOOL)writeWithError:(id *)a0;

@end
