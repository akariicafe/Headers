@class NSOrderedSet, NSString;

@interface NTPersonalizedSectionLimitTransformation : NSObject <FCFeedTransforming>

@property (copy, nonatomic) NSOrderedSet *mandatoryArticleIDs;
@property (copy, nonatomic) NSOrderedSet *personalizedArticleIDs;
@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
