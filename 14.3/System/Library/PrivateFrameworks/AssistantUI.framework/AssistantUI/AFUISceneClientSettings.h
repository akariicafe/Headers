@class NSString;

@interface AFUISceneClientSettings : UIApplicationSceneClientSettings <AFUISceneClientSettings>

@property (readonly, nonatomic) unsigned int clientWindowContextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
