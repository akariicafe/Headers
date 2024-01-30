@class NSString, NSArray;

@interface FCRecommendedCategory : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *topicTagIDs;
@property (readonly, nonatomic) NSArray *channelTagIDs;
@property (readonly, nonatomic) NSArray *subcategories;
@property (readonly, nonatomic) NSArray *curatedTagIDs;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 curatedTagIDs:(id)a2 recommendedTopicTagIDs:(id)a3 recommendedChannelTagIDs:(id)a4 subcategories:(id)a5;

@end
