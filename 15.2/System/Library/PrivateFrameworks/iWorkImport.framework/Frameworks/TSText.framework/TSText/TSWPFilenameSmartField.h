@interface TSWPFilenameSmartField : TSWPPlaceholderSmartField {
    unsigned int _displayFlags;
}

@property (nonatomic) unsigned int displayFlags;

- (id)copyWithContext:(id)a0;
- (BOOL)allowsPasteAsSmartField;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;

@end
