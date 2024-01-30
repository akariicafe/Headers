@class NSArray;

@interface FCTagRelationships : NSObject

@property (readonly, copy, nonatomic) NSArray *relatedTopicsForOnboarding;
@property (readonly, copy, nonatomic) NSArray *relatedChannelsForOnboarding;

- (void).cxx_destruct;
- (id)initWithRelatedTopicsForOnboarding:(id)a0 relatedChannelsForOnboarding:(id)a1;

@end
