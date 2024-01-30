@interface KNObjectPlaceholderInfo : KNPlaceholderInfo

- (id)typeName;
- (int)kind;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)supportsHyperlinks;
- (BOOL)displaysInstructionalText;
- (id)instructionalText;
- (id)initWithKNPlaceholderInfo:(id)a0;
- (BOOL)canAddCaption;
- (BOOL)canRemoveCaption;
- (BOOL)canAddTitle;
- (BOOL)canRemoveTitle;

@end
