@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject

@property (retain, nonatomic) LSBundleProxy *bundleProxy;

+ (id)activityBundleHelperForExtension:(id)a0;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)imageForApplicationIconFormat:(int)a0 activityCategory:(long long)a1;
- (id)initWithBundleProxy:(id)a0;

@end
