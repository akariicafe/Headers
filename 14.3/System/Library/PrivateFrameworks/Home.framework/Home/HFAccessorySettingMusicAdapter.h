@class NSString;

@interface HFAccessorySettingMusicAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)areAllAccessoriesLoggedIntoSameAccount:(id)a0;
+ (BOOL)areAllAccessoriesLoggedOut:(id)a0;

@end
