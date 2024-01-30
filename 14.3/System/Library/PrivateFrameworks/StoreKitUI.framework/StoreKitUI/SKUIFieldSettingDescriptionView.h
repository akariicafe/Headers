@interface SKUIFieldSettingDescriptionView : SKUISettingDescriptionView

@property (nonatomic) BOOL enabled;

- (void)beginEdits;
- (void)commitEdits;

@end
