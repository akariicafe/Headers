@class NSString, FCMapTable;
@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedSort : NSObject <FCFeedTransforming>

@property (retain, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (retain, nonatomic) FCMapTable *feedItemScores;
@property (nonatomic) long long sortOptions;
@property (nonatomic) long long configurationSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithPersonalizer:(id)a0 configurationSet:(long long)a1;
+ (id)transformationWithPersonalizer:(id)a0 sortOptions:(long long)a1;
+ (id)transformationWithPersonalizer:(id)a0;
+ (id)transformationWithPersonalizer:(id)a0 feedItemScores:(id)a1;
+ (id)transformationWithPersonalizer:(id)a0 feedItemScores:(id)a1 sortOptions:(long long)a2;
+ (id)transformationWithPersonalizer:(id)a0 feedItemScores:(id)a1 sortOptions:(long long)a2 configurationSet:(long long)a3;

@end
