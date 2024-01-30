@class UIImage, NSString;

@interface NTKGreenfieldPlaceholderTimelineEntryModel : NTKTimelineEntryModel {
    unsigned long long _modelState;
    UIImage *_appIcon;
    NSString *_appName;
    double _installationProgress;
}

+ (id)entryModelWithAppIcon:(id)a0 appName:(id)a1 installationProgress:(float)a2;
+ (id)entryModelWithNullState;
+ (id)placeholderImageForFamily:(long long)a0;

- (void).cxx_destruct;
- (id)_circularSmallTemplateForInstallation;
- (id)_downloadTextWithIsUpperCased:(BOOL)a0;
- (id)_extraLargeTemplateForInstallation;
- (id)_graphicBezelTemplateForInstallation;
- (id)_graphicCircularTemplateForInstallation;
- (id)_graphicCornerTemplateForInstallation;
- (id)_graphicExtraLargeTemplateForInstallation;
- (id)_graphicRectangularTemplateForInstallation;
- (id)_installationTemplateForComplicationFamily:(long long)a0;
- (id)_modularLargeTemplateForInstallation;
- (id)_modularSmallTemplateForInstallation;
- (id)_placeholderFullColorImageProvider;
- (id)_placeholderImageProvider;
- (id)_utilitarianLargeTemplateForInstallation;
- (id)_utilitarianSmallFlatTemplateForInstallation;
- (id)templateForComplicationFamily:(long long)a0;

@end
