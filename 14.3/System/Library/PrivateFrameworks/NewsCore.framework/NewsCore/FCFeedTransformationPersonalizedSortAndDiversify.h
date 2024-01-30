@class NSArray, NSString;
@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedSortAndDiversify : NSObject <FCFeedTransforming>

@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (nonatomic) long long sortOptions;
@property (retain, nonatomic) NSArray *preselectedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithPersonalizer:(id)a0 sortOptions:(long long)a1 limit:(unsigned long long)a2 preselectedItems:(id)a3;
+ (id)transformationWithPersonalizer:(id)a0 sortOptions:(long long)a1 limit:(unsigned long long)a2;
+ (id)transformationWithPersonalizer:(id)a0 limit:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)transformFeedItems:(id)a0;

@end
