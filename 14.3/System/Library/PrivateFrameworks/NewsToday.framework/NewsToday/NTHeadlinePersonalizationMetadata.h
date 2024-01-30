@class NSString, NSDictionary;

@interface NTHeadlinePersonalizationMetadata : NSObject <NTHeadlinePersonalizationMetadata>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, copy, nonatomic) NSDictionary *scoredTopicIDs;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArticleID:(id)a0 publisherID:(id)a1 scoredTopicIDs:(id)a2;

@end
