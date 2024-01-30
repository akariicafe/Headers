@class NSData, NSString, NSURL, NSArray, SKUIProductPage, NSMutableDictionary, SKUIArtwork, SKUIUber, NSHTTPURLResponse, SSMetricsConfiguration;

@interface SKUIStorePage : NSObject <NSCopying> {
    NSMutableDictionary *_values;
}

@property (retain, nonatomic) SKUIArtwork *backgroundArtwork;
@property (retain, nonatomic) NSData *ITMLData;
@property (retain, nonatomic) NSHTTPURLResponse *ITMLResponse;
@property (retain, nonatomic) SSMetricsConfiguration *metricsConfiguration;
@property (copy, nonatomic) NSString *metricsPageDescription;
@property (copy, nonatomic) NSArray *pageComponents;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSURL *pageURL;
@property (copy, nonatomic) SKUIProductPage *productPage;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SKUIUber *uber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(id)a0 forPageKey:(id)a1;
- (id)valueForPageKey:(id)a0;

@end
