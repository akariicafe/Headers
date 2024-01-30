@class NSString, NSObject;
@protocol ACHTemplateSourceDelegate, ASCompetitionTemplateSourceDataProvider;

@interface ASCompetitionTemplateSource : NSObject <ACHTemplateSource>

@property (weak, nonatomic) id<ASCompetitionTemplateSourceDataProvider> dataProvider;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)sourceShouldRunForDate:(id)a0;
- (void)templatesForDate:(id)a0 completion:(id /* block */)a1;
- (id)localizationBundleURLForTemplate:(id)a0;
- (id)resourceBundleURLForTemplate:(id)a0;
- (id)propertyListBundleURLForTemplate:(id)a0;
- (id)stickerBundleURLForTemplate:(id)a0;
- (id)customPlaceholderValuesForTemplate:(id)a0;
- (id)_competitionForVictoryTemplate:(id)a0;
- (id)_friendForVictoryTemplate:(id)a0;
- (id)unusedTemplateNamesForFriendWithUUID:(id)a0;

@end
