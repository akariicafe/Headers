@class NSString, UIImage;

@interface NTKCompanion1stPartyApp : NTKCompanionApp {
    UIImage *_icon;
}

@property (nonatomic) unsigned long long complicationType;
@property (copy, nonatomic) NSString *iconName;

+ (id)_allApps;
+ (id)companionAppWithAppInfo:(struct _NTKCompanion1stPartyInfo { id x0; id x1; unsigned long long x2; id x3; })a0;
+ (id)appForBundleIdentifier:(id)a0;
+ (id)allAppsForDevice:(id)a0;
+ (BOOL)complicationType:(unsigned long long)a0 mapsToRemovedSystemAppOnDevice:(id)a1;

- (void).cxx_destruct;
- (id)icon;
- (void)setIcon:(id)a0;
- (id)initWithAppInfo:(struct _NTKCompanion1stPartyInfo { id x0; id x1; unsigned long long x2; id x3; })a0;
- (id)complication;

@end
