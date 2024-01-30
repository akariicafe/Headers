@class NSString;

@interface SPUIMutableSearchBarSceneSettings : SPUIMutableLegibilitySceneSettings <SPUISearchBarSceneSettings>

@property (nonatomic) double scrollProgress;
@property (nonatomic) BOOL animated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
