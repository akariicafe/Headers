@class NSString, NSArray;

@interface ASKLoadBundleResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSArray *searchBundles;

- (void).cxx_destruct;
- (void)main;
- (id)initWithResourceName:(id)a0 searchBundles:(id)a1;

@end
