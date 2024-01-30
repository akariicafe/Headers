@interface KNObjectPlaceholderInfo : KNPlaceholderInfo

- (id)typeName;
- (int)kind;
- (Class)layoutClass;
- (Class)repClass;
- (BOOL)displaysInstructionalText;
- (id)instructionalText;
- (BOOL)supportsHyperlinks;
- (BOOL)canAddCaption;
- (BOOL)canAddTitle;
- (BOOL)canRemoveCaption;
- (BOOL)canRemoveTitle;
- (id)initWithKNPlaceholderInfo:(id)a0;

@end
