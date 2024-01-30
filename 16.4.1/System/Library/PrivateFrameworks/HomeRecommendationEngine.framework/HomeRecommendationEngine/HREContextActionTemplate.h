@class NSString;
@protocol HFIconDescriptor;

@interface HREContextActionTemplate : HREActionTemplate

@property (retain, nonatomic) NSString *contextActionName;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;

- (void).cxx_destruct;
- (id)createStarterRecommendationInHome:(id)a0;
- (Class)recommendationClass;

@end
