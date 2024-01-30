@class ResultEntity, NSString, NSArray, NSURL, NSDate, NSNumber;

@interface Content : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *umcId;
@property (nonatomic, copy) NSURL *punchoutUrl;
@property (nonatomic, copy) NSURL *detailsUrl;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, copy) NSDate *finaleDate;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, copy) NSString *utsSearchUrl;
@property (nonatomic, retain) NSNumber *hasMoreResults;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSNumber *isInWatchList;
@property (nonatomic, copy) NSString *episodeNumber;
@property (nonatomic, copy) NSString *seasonNumber;
@property (nonatomic, retain) Content *season;
@property (nonatomic, retain) Content *show;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSNumber *seasonCount;
@property (nonatomic, retain) NSNumber *appDisambiguation;
@property (nonatomic, retain) ResultEntity *resultEntity;
@property (nonatomic, copy) NSString *ratingValue;
@property (nonatomic, copy) NSString *ratingSystem;
@property (nonatomic, retain) NSNumber *runtimeInMinutes;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
