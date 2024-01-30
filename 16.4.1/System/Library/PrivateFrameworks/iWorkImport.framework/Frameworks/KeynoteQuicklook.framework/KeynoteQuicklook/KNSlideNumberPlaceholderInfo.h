@interface KNSlideNumberPlaceholderInfo : KNPlaceholderInfo

+ (BOOL)wantsTitleAndCaptionUUIDs;

- (void)acceptVisitor:(id)a0;
- (BOOL)isSelectable;
- (id)typeName;
- (int)kind;
- (Class)layoutClass;
- (Class)repClass;
- (id)instructionalText;
- (id)textureDeliveryStylesLocalized:(BOOL)a0 animationFilter:(id)a1;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (id)copyToInstantiateMasterPlaceholder;
- (void)loadFromUnarchiver:(id)a0;

@end
