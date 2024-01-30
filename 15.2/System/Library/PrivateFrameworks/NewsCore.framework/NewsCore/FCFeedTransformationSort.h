@class NSString;

@interface FCFeedTransformationSort : NSObject <FCFeedTransforming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithSortMethod:(long long)a0;
+ (id)transformationWithSortMethod:(long long)a0 configurationSet:(long long)a1 personalizer:(id)a2;
+ (id)transformationWithSortMethod:(long long)a0 personalizer:(id)a1;

- (id)transformFeedItems:(id)a0;

@end
