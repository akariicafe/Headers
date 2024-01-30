@class NSString;

@interface SBApplicationPlaceholder : SBHProxiedApplicationPlaceholder <FBSApplicationPlaceholderObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pause;
- (BOOL)cancel;
- (BOOL)prioritize;
- (BOOL)resume;
- (void)_reloadThumbnailImage;

@end
