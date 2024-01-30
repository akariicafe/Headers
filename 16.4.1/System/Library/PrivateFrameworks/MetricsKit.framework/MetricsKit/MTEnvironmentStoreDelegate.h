@class NSString;

@interface MTEnvironmentStoreDelegate : MTEnvironmentDeviceDelegate <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userAgent;
- (id)connectionType;
- (id)cookies;
- (id)_connectionType;
- (id)dsId;
- (id)storeFrontHeader;
- (id)_activeItunesAccount;

@end
