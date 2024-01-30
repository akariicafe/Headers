@class NSString, OKPresentationMaterial;
@protocol OKWidgetProtocol;

@interface OKMaterial : NSObject <OKSettingsSupport> {
    OKPresentationMaterial *_material;
    BOOL _needsApplySettings;
    BOOL _hasSettingsApplied;
}

@property (nonatomic) id<OKWidgetProtocol> parentWidget;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)load;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)unload;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)applySettings;
- (void)applySettingsIfNeeded;
- (id)initWithMaterial:(id)a0;
- (void)setNeedsApplySettings;

@end
