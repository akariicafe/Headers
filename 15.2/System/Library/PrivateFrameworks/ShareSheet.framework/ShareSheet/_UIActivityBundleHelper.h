@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject

@property (retain, nonatomic) LSBundleProxy *bundleProxy;

+ (id)activityBundleHelperForExtension:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBundleProxy:(id)a0;
- (id)imageForApplicationIconFormat:(int)a0 activityCategory:(long long)a1;
- (id)debugDescription;

@end
