@class NSString, NSArray;

@interface ASKLoadBundleResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSArray *searchBundles;

+ (id)_searchBundles;
+ (id)supportedScheme;

- (id)initWithResourceName:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;

@end
