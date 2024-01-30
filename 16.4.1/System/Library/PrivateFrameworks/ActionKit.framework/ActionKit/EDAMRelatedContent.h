@class NSString, NSArray, EDAMContact, NSNumber;

@interface EDAMRelatedContent : FATObject

@property (retain, nonatomic) NSString *contentId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSString *sourceFaviconUrl;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSNumber *date;
@property (retain, nonatomic) NSString *teaser;
@property (retain, nonatomic) NSArray *thumbnails;
@property (retain, nonatomic) NSNumber *contentType;
@property (retain, nonatomic) NSNumber *accessType;
@property (retain, nonatomic) NSString *visibleUrl;
@property (retain, nonatomic) NSString *clipUrl;
@property (retain, nonatomic) EDAMContact *contact;
@property (retain, nonatomic) NSArray *authors;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
