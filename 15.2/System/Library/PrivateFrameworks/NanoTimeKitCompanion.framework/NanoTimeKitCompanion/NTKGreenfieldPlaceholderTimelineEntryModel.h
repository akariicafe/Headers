@class UIImage, NSString;

@interface NTKGreenfieldPlaceholderTimelineEntryModel : NTKTimelineEntryModel {
    unsigned long long _modelState;
    UIImage *_appIcon;
    NSString *_appName;
    double _installationProgress;
}

+ (id)placeholderImageForFamily:(long long)a0;
+ (id)entryModelWithNullState;
+ (id)entryModelWithAppIcon:(id)a0 appName:(id)a1 installationProgress:(float)a2;

- (void).cxx_destruct;
- (id)_installationTemplateForComplicationFamily:(long long)a0;
- (id)_graphicRectangularTemplateForInstallation;
- (id)_utilitarianSmallFlatTemplateForInstallation;
- (id)_utilitarianLargeTemplateForInstallation;
- (id)_graphicCircularTemplateForInstallation;
- (id)_modularSmallTemplateForInstallation;
- (id)_modularLargeTemplateForInstallation;
- (id)_circularSmallTemplateForInstallation;
- (id)_graphicCornerTemplateForInstallation;
- (id)_graphicBezelTemplateForInstallation;
- (id)_extraLargeTemplateForInstallation;
- (id)_graphicExtraLargeTemplateForInstallation;
- (id)_downloadTextWithIsUpperCased:(BOOL)a0;
- (id)_placeholderFullColorImageProvider;
- (id)_placeholderImageProvider;
- (id)templateForComplicationFamily:(long long)a0;

@end
