@class NSString, NSDate;

@interface IMPodcastFeedItem : NSObject

@property (nonatomic) BOOL preferredCategoryFound;
@property (retain, nonatomic) NSString *author;
@property (nonatomic) unsigned long long byteSize;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *enclosureParameterString;
@property (nonatomic) BOOL isExplicit;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSString *itemDescriptionSourceElement;
@property (retain, nonatomic) NSDate *pubDate;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int trackNum;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *itunesTitle;
@property (retain, nonatomic) NSString *itemSummary;
@property (retain, nonatomic) NSString *itemSummarySourceElement;
@property (nonatomic) long long seasonNumber;
@property (nonatomic) long long episodeNumber;
@property (retain, nonatomic) NSString *episodeType;
@property (retain, nonatomic) NSString *webpageURL;
@property (retain, nonatomic) NSString *episodeStoreId;
@property (retain, nonatomic) NSString *priceType;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSString *enclosureURL;
@property (retain, nonatomic) NSString *entitledPriceType;
@property (nonatomic) double entitledDuration;
@property (retain, nonatomic) NSString *entitledEnclosureURL;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)resolvedEnclosureUrl;

@end
