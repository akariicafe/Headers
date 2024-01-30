@class NSArray;

@interface FCCurrentAudioContent : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *recentHeadlines;
@property (readonly, copy, nonatomic) NSArray *featuredHeadlines;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecentHeadlines:(id)a0 featuredHeadlines:(id)a1;

@end
