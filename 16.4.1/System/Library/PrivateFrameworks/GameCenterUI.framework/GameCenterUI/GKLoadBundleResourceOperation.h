@class NSString, NSArray;

@interface GKLoadBundleResourceOperation : GKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSArray *searchBundles;

- (void)main;
- (void).cxx_destruct;
- (id)initWithResourceName:(id)a0 searchBundles:(id)a1;

@end
