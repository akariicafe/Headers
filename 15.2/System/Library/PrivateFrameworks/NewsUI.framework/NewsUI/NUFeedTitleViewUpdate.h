@class NSString, NSAttributedString, UIImage;

@interface NUFeedTitleViewUpdate : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long updateType;
@property (nonatomic) unsigned long long storyCount;
@property (copy, nonatomic) NSString *feedName;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIImage *feedImage;
@property (nonatomic) double lingerTimeInterval;
@property (copy, nonatomic) NSString *accessibilityTitle;

+ (id)feedTitleViewUpdateForAttributedText:(id)a0 forType:(unsigned long long)a1;
+ (id)feedTitleViewUpdateEmptyStateForType:(unsigned long long)a0;
+ (id)feedTitleViewUpdateCheckingForNewStoriesForType:(unsigned long long)a0;
+ (id)feedTitleViewUpdateForFeedImage:(id)a0 accessibilityTitle:(id)a1;
+ (id)feedTitleViewUpdateForFeedName:(id)a0;
+ (id)feedTitleViewUpdateForCheckingForNewStories;
+ (id)feedTitleViewUpdateNewStoriesWithStoryForType:(unsigned long long)a0 storyCount:(unsigned long long)a1 linger:(BOOL)a2;
+ (id)feedTitleViewUpdateNewStoriesWithStoryForType:(unsigned long long)a0 storyCount:(unsigned long long)a1;
+ (id)feedTitleViewUpdateEmptyState;
+ (id)feedTitleViewUpdateForAttributedText:(id)a0;
+ (id)feedTitleViewUpdateForNewStoriesWithStoryCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)convertToTitleViewUpdateWithCompact:(BOOL)a0;
- (id)initWithType:(unsigned long long)a0 updateType:(unsigned long long)a1;

@end
