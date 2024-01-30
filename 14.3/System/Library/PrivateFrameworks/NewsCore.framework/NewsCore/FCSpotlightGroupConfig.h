@class NSString, NSDate;
@protocol FCCardStyleProviding;

@interface FCSpotlightGroupConfig : FCGroupConfig

@property (readonly, copy, nonatomic) NSString *spotlightArticleID;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, copy, nonatomic) NSString *spotlightCallToActionTitle;
@property (readonly, copy, nonatomic) NSString *spotlightEyebrowTitle;
@property (readonly, copy, nonatomic) id<FCCardStyleProviding> spotlightItemStyle;
@property (readonly, copy, nonatomic) id<FCCardStyleProviding> spotlightItemDarkStyle;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
