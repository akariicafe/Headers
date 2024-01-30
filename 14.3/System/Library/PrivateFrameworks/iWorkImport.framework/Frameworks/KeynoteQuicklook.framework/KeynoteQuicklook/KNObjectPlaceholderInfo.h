@interface KNObjectPlaceholderInfo : KNPlaceholderInfo

- (int)kind;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)displaysInstructionalText;
- (id)instructionalText;
- (id)initWithKNPlaceholderInfo:(id)a0;
- (BOOL)canAddCaption;
- (BOOL)canRemoveCaption;
- (BOOL)canAddTitle;
- (BOOL)canRemoveTitle;

@end
