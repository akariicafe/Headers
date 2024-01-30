@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *itemIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *podcastFeedURLIdentifier;

- (id)stringValue;
- (long long)longLongValue;
- (id)numberValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithLongLong:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNumber:(id)a0;
- (id)initWithPodcastFeedURL:(id)a0;

@end
