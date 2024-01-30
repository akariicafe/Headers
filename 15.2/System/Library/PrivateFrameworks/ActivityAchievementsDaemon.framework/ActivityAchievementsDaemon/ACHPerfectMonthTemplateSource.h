@class NSString, NSCalendar, NSObject;
@protocol ACHTemplateSourceDelegate;

@interface ACHPerfectMonthTemplateSource : NSObject <ACHTemplateSource>

@property (retain, nonatomic) NSCalendar *utcGregorianCalendar;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)sourceShouldRunForDate:(id)a0;
- (void)templatesForDate:(id)a0 completion:(id /* block */)a1;
- (id)localizationBundleURLForTemplate:(id)a0;
- (id)resourceBundleURLForTemplate:(id)a0;
- (id)propertyListBundleURLForTemplate:(id)a0;
- (id)stickerBundleURLForTemplate:(id)a0;
- (id)_monthlyAchievementsAssetsDirectoryBasePath;
- (id)_modelsDirectoryBasePathForTemplate:(id)a0;
- (id)_monthStringFromTemplateName:(id)a0;

@end
