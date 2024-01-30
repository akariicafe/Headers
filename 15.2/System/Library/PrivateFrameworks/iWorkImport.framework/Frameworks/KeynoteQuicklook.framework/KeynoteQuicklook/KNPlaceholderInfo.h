@interface KNPlaceholderInfo : TSWPShapeInfo

+ (Class)classForUnarchiver:(id)a0;

- (int)kind;
- (BOOL)isEmpty;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)displaysInstructionalText;
- (BOOL)autoListRecognition;
- (BOOL)autoListTermination;
- (BOOL)shouldHideEmptyBullets;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)copyAsShapeInfoWithContext:(id)a0;
- (BOOL)isAllowedInGroups;
- (id)defaultInstructionalText;
- (BOOL)remainsInDocumentWhenDeletedFromChildInfos;
- (BOOL)shouldDisplayTextAsTypeName;

@end
