@interface TNPageLayoutAddendum : TNPageLayoutContainer

- (struct CGColor { } *)backgroundColor;
- (void)updateChildrenFromInfo;
- (Class)contentLayoutClassOverride;
- (BOOL)wantsOverlayContentLayout;

@end
