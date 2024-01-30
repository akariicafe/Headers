@interface KNSlideNumberPlaceholderInfo : KNPlaceholderInfo

- (int)kind;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (id)textureDeliveryStylesLocalized:(BOOL)a0 animationFilter:(id)a1;
- (id)instructionalText;
- (void)loadFromUnarchiver:(id)a0;
- (id)copyToInstantiateMasterPlaceholder;

@end
