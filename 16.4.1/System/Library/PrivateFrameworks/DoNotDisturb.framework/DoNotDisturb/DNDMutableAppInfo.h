@class DNDApplicationIdentifier, NSString, NSURL;

@interface DNDMutableAppInfo : DNDAppInfo

@property (nonatomic) long long source;
@property (copy, nonatomic) DNDApplicationIdentifier *applicationIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSURL *storeIconURL;
@property (copy, nonatomic) NSURL *cachedIconURL;

- (void)setApplicationIdentifier:(id)a0;
- (void)setSource:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayName:(id)a0;
- (void)setCachedIconURL:(id)a0;
- (void)setStoreIconURL:(id)a0;

@end
