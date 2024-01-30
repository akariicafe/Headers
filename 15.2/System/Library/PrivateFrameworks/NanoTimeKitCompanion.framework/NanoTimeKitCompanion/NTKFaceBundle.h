@class NSString;

@interface NTKFaceBundle : NSObject

@property (class, readonly, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) NSString *analyticsIdentifier;

@property (readonly, nonatomic) Class faceClass;
@property (readonly, nonatomic) Class faceViewClass;
@property (readonly, nonatomic) NSString *galleryDescriptionText;
@property (readonly, nonatomic) NSString *galleryTitle;

+ (id)imageWithName:(id)a0;
+ (unsigned long long)argon_defaultNotificationAction;
+ (id)localizedStringForKey:(id)a0 tableSuffix:(id)a1 comment:(id)a2;
+ (id)_localizedStringForKey:(id)a0 table:(id)a1 suffix:(id)a2 comment:(id)a3;
+ (id)logCategoryName;
+ (id)localizedStringForKey:(id)a0 comment:(id)a1;
+ (id)localizedStringForKey:(id)a0 table:(id)a1 comment:(id)a2;
+ (id)logObject;

- (id)defaultFaceForDevice:(id)a0;
- (id)galleryDefaultPigmentOptionsForDevice:(id)a0;
- (id)legacyFaceStyle;
- (id)galleryFacesForDevice:(id)a0;
- (id)heroFacesForDevice:(id)a0;
- (id)prideFacesForDevice:(id)a0;
- (id)kbiehakdkeizlForDevice:(id)a0;
- (BOOL)isHardwareSpecific;
- (void)argon_generateNotificationContentWithCompletion:(id /* block */)a0;
- (void)argon_cleanupNotificationAssets;
- (id)heroPride2020DefaultFacesForDevice:(id)a0;
- (id)heroSpring2020DefaultFacesForDevice:(id)a0;
- (id)heroGraceDefaultFacesForDevice:(id)a0;
- (id)heroGloryFDefaultFacesForDevice:(id)a0;
- (id)heroGloryEDefaultFacesForDevice:(id)a0;
- (id)heroGloryBDefaultFacesForDevice:(id)a0;
- (id)heroLegacyDefaultFacesForDevice:(id)a0;

@end
