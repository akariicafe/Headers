@class NSString, FCFeedRange;

@interface FCFeedTransformationClamp : NSObject <FCFeedTransforming>

@property (retain, nonatomic) FCFeedRange *feedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithDateRange:(id)a0;
+ (id)transformationWithFeedRange:(id)a0;

- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;

@end
