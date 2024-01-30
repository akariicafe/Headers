@class FCColorGradient, NSArray, NSDictionary, NSString, FCColor;

@interface FCGroupConfig : NSObject

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) FCColor *groupTitleColor;
@property (retain, nonatomic) FCColor *groupDarkStyleTitleColor;
@property (nonatomic) unsigned long long cutoffTimeSecs;
@property (nonatomic) unsigned long long cutoffCount;
@property (retain, nonatomic) NSArray *groupFonts;
@property (retain, nonatomic) NSDictionary *articleMetadataByArticleID;
@property (retain, nonatomic) FCColorGradient *groupBackgroundColorGradient;
@property (retain, nonatomic) FCColorGradient *groupDarkStyleBackgroundColorGradient;
@property (readonly, nonatomic) NSString *articleListID;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *groupSubtitle;
@property (readonly, nonatomic) NSString *groupTitleFontName;
@property (readonly, nonatomic) double groupTitleFontSize;
@property (readonly, nonatomic) double groupTitleFontSizeiPad;
@property (readonly, nonatomic) double groupTitleFontTracking;
@property (readonly, nonatomic) double groupTitleFontTrackingiPad;
@property (readonly, nonatomic) double groupTitleOffsetHeight;
@property (readonly, nonatomic) double groupTitleOffsetHeightiPad;
@property (readonly, nonatomic) double groupTitleOffsetY;
@property (readonly, nonatomic) double groupTitleOffsetYiPad;
@property (readonly, nonatomic) NSString *groupActionTitle;
@property (readonly, nonatomic) NSString *groupActionURLString;
@property (readonly, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *feedID;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
