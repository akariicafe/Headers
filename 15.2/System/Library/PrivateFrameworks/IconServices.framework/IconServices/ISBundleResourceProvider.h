@class NSURL, NSDictionary, NSString;

@interface ISBundleResourceProvider : ISResourceProvider

@property (retain) NSURL *bundleURL;
@property (retain) NSDictionary *iconDictionary;
@property unsigned long long options;
@property (retain) NSString *templateType;

- (id)symbol;
- (void)resolveResources;
- (id)initWithBundleURL:(id)a0 iconDictionary:(id)a1 options:(unsigned long long)a2;
- (BOOL)_isAppleResource;
- (unsigned long long)iconShape;
- (id)initWithBundle:(id)a0 options:(unsigned long long)a1;
- (id)iconResource;
- (void).cxx_destruct;
- (id)customRecipe;
- (id)resourceNamed:(id)a0;

@end
