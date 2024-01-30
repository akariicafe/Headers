@class NSString, NSDate;

@interface NewsUI2.MagazineFeedArticle : NSObject <FCHeadlineMetadata> {
    void /* unknown type, empty encoding */ articleID;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ displayDate;
    void /* unknown type, empty encoding */ storyType;
    void /* unknown type, empty encoding */ shortExcerpt;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, readonly) NSString *shortExcerpt;

- (id)init;
- (void).cxx_destruct;

@end
