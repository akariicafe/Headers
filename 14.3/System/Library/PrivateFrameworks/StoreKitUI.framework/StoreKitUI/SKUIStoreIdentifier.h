@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *itemIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *podcastFeedURLIdentifier;

- (long long)longLongValue;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNumber:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)numberValue;
- (BOOL)isEqual:(id)a0;
- (id)stringValue;
- (id)initWithLongLong:(long long)a0;
- (id)initWithPodcastFeedURL:(id)a0;

@end
