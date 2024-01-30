@class SBApplication;

@interface SBApplicationIcon : SBLeafIcon {
    SBApplication *_application;
}

+ (BOOL)canGenerateIconsInBackground;

- (id)initWithApplication:(id)a0;
- (id)iTunesCategoriesOrderedByRelevancy;
- (id)folderTitleOptions;
- (id)automationID;
- (id)folderFallbackTitle;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)a0 andContinuousTime:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)application;
- (BOOL)isApplicationIcon;
- (BOOL)isEqual:(id)a0;
- (void)setBadge:(id)a0;
- (id)tags;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)a0;
- (void)possibleUserTapDidCancel;

@end
