@class NSString;

@interface MTEnvironmentStoreDelegate : MTEnvironmentDeviceDelegate <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userAgent;
- (id)dsId;
- (id)connectionType;
- (id)_connectionType;
- (id)cookies;
- (id)storeFrontHeader;
- (id)_activeItunesAccount;

@end
