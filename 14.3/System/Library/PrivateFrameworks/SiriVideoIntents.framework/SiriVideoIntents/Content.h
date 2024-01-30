@class NSString, ContentImage, NSURL, NSDate, NSNumber;

@interface Content : INObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *umcId;
@property (copy, nonatomic) NSURL *punchoutUrl;
@property (copy, nonatomic) NSURL *detailsUrl;
@property (copy, nonatomic) ContentImage *image;
@property (copy, nonatomic) ContentImage *wideImage;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *utsSearchUrl;
@property (copy, nonatomic) NSNumber *hasMoreResults;
@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *isInWatchList;
@property (copy, nonatomic) NSString *showName;
@property (copy, nonatomic) NSNumber *episodeNumber;
@property (copy, nonatomic) NSNumber *seasonNumber;

@end
