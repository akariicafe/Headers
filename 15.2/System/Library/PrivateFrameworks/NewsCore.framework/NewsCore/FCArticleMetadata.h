@class NSDictionary, NSString, NSDate;

@interface FCArticleMetadata : NSObject <FCHeadlineMetadata>

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSDate *displayDate;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL isTreatedAsNew;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) NSString *thumbnailTextColor;
@property (readonly, nonatomic) NSString *thumbnailBackgroundColor;
@property (readonly, nonatomic) NSString *sourceChannelTagID;
@property (readonly, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) NSString *thumbnailAccentColor;
@property (readonly, nonatomic) NSString *thumbnailPrimaryColor;
@property (readonly, nonatomic) BOOL isPaid;
@property (readonly, nonatomic) NSString *rapidUpdate;
@property (readonly, nonatomic) NSString *thumbnail;
@property (readonly, nonatomic) long long thumbnailMetadata;
@property (readonly, nonatomic) NSString *thumbnailMedium;
@property (readonly, nonatomic) long long thumbnailMediumMetadata;
@property (readonly, nonatomic) NSString *thumbnailHQ;
@property (readonly, nonatomic) long long thumbnailHQMetadata;
@property (readonly, nonatomic) NSString *thumbnailUltraHQ;
@property (readonly, nonatomic) long long thumbnailUltraHQMetadata;
@property (readonly, nonatomic) long long thumbnailFocalFrame;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) NSString *videoURL;
@property (readonly, nonatomic) NSString *storyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 identifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)publisherID;

@end
