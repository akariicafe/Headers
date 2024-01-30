@class NSString;

@interface SSPhotosFromAppSectionBuilder : SSPhotosSectionBuilder

@property (retain, nonatomic) NSString *appBundleId;

+ (id)supportedBundleIds;

- (void)setSection:(id)a0;
- (void).cxx_destruct;
- (id)buildButtonItem;
- (long long)maxCardSections;
- (id)buildTitle;

@end
