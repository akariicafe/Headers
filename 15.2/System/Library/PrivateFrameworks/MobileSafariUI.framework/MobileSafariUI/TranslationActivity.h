@class WBSTranslationContext;

@interface TranslationActivity : TabDocumentActivity

@property (readonly, nonatomic) WBSTranslationContext *translationContext;

+ (id)allTranslationActivities;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitleWithTranslationContext:(id)a0;
- (BOOL)canPerformWithTranslationContext:(id)a0;
- (void)prepareWithTranslationContext:(id)a0;
- (void)performActivityWithTranslationContext:(id)a0;
- (id)activityTitleWithTabDocument:(id)a0;
- (BOOL)canPerformWithTabDocument:(id)a0;
- (void)prepareWithTabDocument:(id)a0;
- (void)performActivityWithTabDocument:(id)a0;

@end
