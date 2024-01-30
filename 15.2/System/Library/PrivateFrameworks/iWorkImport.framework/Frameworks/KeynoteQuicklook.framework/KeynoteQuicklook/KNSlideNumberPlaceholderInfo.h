@interface KNSlideNumberPlaceholderInfo : KNPlaceholderInfo

+ (BOOL)wantsTitleAndCaptionUUIDs;

- (BOOL)isSelectable;
- (id)typeName;
- (int)kind;
- (void)acceptVisitor:(id)a0;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)allowsTitle;
- (id)textureDeliveryStylesLocalized:(BOOL)a0 animationFilter:(id)a1;
- (id)instructionalText;
- (void)loadFromUnarchiver:(id)a0;
- (id)copyToInstantiateMasterPlaceholder;
- (BOOL)allowsCaption;

@end
