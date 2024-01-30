@class NSString, NSURL;

@interface SKUIReviewMetadata : NSObject <NSCopying>

@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) float rating;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *submitURL;
@property (readonly, nonatomic) unsigned long long bodyMaxLength;
@property (readonly, nonatomic) unsigned long long nicknameMaxLength;
@property (readonly, nonatomic) unsigned long long titleMaxLength;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithReviewDictionary:(id)a0;

@end
