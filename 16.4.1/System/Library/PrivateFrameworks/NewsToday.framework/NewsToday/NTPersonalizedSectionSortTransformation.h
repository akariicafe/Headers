@class NSOrderedSet, NSString;
@protocol FCFeedTransforming;

@interface NTPersonalizedSectionSortTransformation : NSObject <FCFeedTransforming>

@property (copy, nonatomic) NSOrderedSet *mandatoryArticleIDs;
@property (copy, nonatomic) NSOrderedSet *personalizedArticleIDs;
@property (retain, nonatomic) id<FCFeedTransforming> sortTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
