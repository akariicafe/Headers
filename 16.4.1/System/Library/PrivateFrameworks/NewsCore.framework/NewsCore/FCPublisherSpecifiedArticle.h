@class NSString, NSDate;

@interface FCPublisherSpecifiedArticle : NSObject <FCHeadlineMetadata>

@property (copy, nonatomic) NSString *articleID;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *displayDate;
@property (readonly, nonatomic) NSString *storyType;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
