@class NSString;
@protocol FCFeedPersonalizing;

@interface FCFeedTransformationLowQualityContentFilter : NSObject <FCFeedTransforming>

@property (retain, nonatomic) id<FCFeedPersonalizing> feedPersonalizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationWithPersonalizer:(id)a0;

- (id)transformFeedItems:(id)a0;
- (void).cxx_destruct;

@end
