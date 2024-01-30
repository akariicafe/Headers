@class NSString;

@interface MTEnvironmentUIKitStoreDelegate : MTEnvironmentUIKitDelegate <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)connectionType;
- (id)userAgent;
- (id)dsId;
- (id)_connectionType;
- (id)cookies;
- (id)storeFrontHeader;
- (id)_activeItunesAccount;

@end
