@class NSString, NSDate;

@interface MTServerPodcastEpisode : NSObject <MTFeedEpisode, PodcastsFoundation.MediaObject> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ href;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ relationships;
}

@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) unsigned long long byteSize;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) BOOL isExplicit;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, readonly) NSDate *pubDate;
@property (nonatomic, readonly) NSDate *firstTimeAvailableAsPaid;
@property (nonatomic, readonly) NSDate *firstTimeAvailableAsFree;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned int trackNum;
@property (nonatomic, readonly) NSString *uti;
@property (nonatomic, readonly) NSString *itunesTitle;
@property (nonatomic, readonly) NSString *itemSummary;
@property (nonatomic, readonly) long long seasonNumber;
@property (nonatomic, readonly) long long episodeNumber;
@property (nonatomic, readonly) NSString *episodeType;
@property (nonatomic, readonly) NSString *webpageURL;
@property (nonatomic, readonly) NSString *episodeStoreId;
@property (nonatomic, readonly) NSString *priceType;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *enclosureURL;
@property (nonatomic, readonly) NSString *entitledPriceType;
@property (nonatomic, readonly) double entitledDuration;
@property (nonatomic, readonly) NSString *entitledEnclosureURL;
@property (nonatomic, readonly) NSString *resolvedEnclosureUrl;
@property (nonatomic, readonly) BOOL priceTypeIsPSUB;
@property (nonatomic, readonly) BOOL isRestricted;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *type;

- (id)init;
- (void).cxx_destruct;

@end
