@class BCSURLPatternMatchResult, NSString;
@protocol BCSDomainItemCaching, BCSMetricFactoryProtocol;

@interface BCSURLPatternController : NSObject <BCSURLPatternControllerProtocol>

@property (readonly, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (readonly, nonatomic) id<BCSDomainItemCaching> cacheManager;
@property (retain, nonatomic) BCSURLPatternMatchResult *cachedPatternMatchingResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
