@class NSString, NSMutableArray;

@interface IMPodcastFeed : NSObject

@property (nonatomic) BOOL preferredCategoryFound;
@property (retain, nonatomic) NSString *feedDescription;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSString *globalImageURL;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *provider;
@property (retain, nonatomic) NSString *updatedFeedURL;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isExplicit;
@property (retain, nonatomic) NSString *showType;
@property (retain, nonatomic) NSString *webpageURL;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
