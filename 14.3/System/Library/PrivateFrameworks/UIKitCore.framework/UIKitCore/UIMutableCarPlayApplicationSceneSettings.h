@class NSString;

@interface UIMutableCarPlayApplicationSceneSettings : UIMutableApplicationSceneSettings <UICarPlayApplicationSceneSettings>

@property (nonatomic) BOOL disableFiveRowKeyboards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
