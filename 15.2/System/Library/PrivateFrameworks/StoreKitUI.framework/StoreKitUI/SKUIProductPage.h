@class NSData, NSString, SKUIProductPageProductInfo, SKUIProductPageItem, NSURL, NSArray, SKUIReviewConfiguration, SKUIUber, NSHTTPURLResponse, SSMetricsConfiguration;

@interface SKUIProductPage : NSObject <NSCopying>

@property (nonatomic) long long defaultPageFragment;
@property (retain, nonatomic) SKUIProductPageItem *item;
@property (retain, nonatomic) NSData *ITMLData;
@property (retain, nonatomic) NSHTTPURLResponse *ITMLResponse;
@property (retain, nonatomic) SSMetricsConfiguration *metricsConfiguration;
@property (copy, nonatomic) NSString *metricsPageDescription;
@property (copy, nonatomic) NSURL *pageURL;
@property (retain, nonatomic) SKUIProductPageProductInfo *productInformation;
@property (copy, nonatomic) NSArray *relatedContentSwooshes;
@property (retain, nonatomic) SKUIReviewConfiguration *reviewConfiguration;
@property (retain, nonatomic) SKUIUber *uber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
