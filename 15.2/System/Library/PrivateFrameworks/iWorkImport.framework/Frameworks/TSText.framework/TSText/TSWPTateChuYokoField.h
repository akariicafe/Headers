@interface TSWPTateChuYokoField : TSWPSmartField

- (BOOL)allowsEditing;
- (unsigned long long)attributeArrayKind;
- (int)styleAttributeArrayKind;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;

@end
