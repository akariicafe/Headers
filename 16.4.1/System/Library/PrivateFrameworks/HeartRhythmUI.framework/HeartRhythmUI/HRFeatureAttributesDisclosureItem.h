@interface HRFeatureAttributesDisclosureItem : HRFeatureAttributesItem

- (BOOL)isInteractive;
- (id)valueString;
- (id)initWithTitle:(id)a0 value:(id)a1;
- (long long)cellAccessoryType;
- (void)handleUserInteractionWithItemWithHostViewController:(id)a0;

@end
