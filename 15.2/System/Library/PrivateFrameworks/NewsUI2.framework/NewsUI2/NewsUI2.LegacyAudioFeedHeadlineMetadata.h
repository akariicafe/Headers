@class NSString, NSDate;

@interface NewsUI2.LegacyAudioFeedHeadlineMetadata : NSObject <FCHeadlineMetadata> {
    void /* unknown type, empty encoding */ displayDate;
    void /* unknown type, empty encoding */ storyType;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ shortExcerpt;
}

@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *shortExcerpt;

- (void).cxx_destruct;
- (id)init;

@end
