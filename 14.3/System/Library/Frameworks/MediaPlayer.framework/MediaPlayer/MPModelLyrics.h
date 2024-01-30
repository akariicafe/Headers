@class NSString;

@interface MPModelLyrics : MPModelObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *TTML;
@property (nonatomic) BOOL hasStoreLyrics;
@property (nonatomic) BOOL hasTimeSyncedLyrics;

+ (id)__TTML_KEY;
+ (id)__text_KEY;
+ (id)__hasTimeSyncedLyrics_KEY;
+ (id)__hasStoreLyrics_KEY;

@end
