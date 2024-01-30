@class NSDictionary, NSString, NSDate;

@interface FCArticleMetadata : NSObject <FCHeadlineMetadata>

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSDate *displayDate;
@property (readonly, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL isTreatedAsNew;
@property (readonly, nonatomic) NSString *storyType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end
