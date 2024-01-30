@class NSString;

@interface TSWPUnsupportedHyperlinkField : TSWPPlaceholderSmartField {
    NSString *_href;
    NSString *_hrefOriginal;
}

@property (copy, nonatomic) NSString *href;
@property (copy, nonatomic) NSString *hrefOriginal;

+ (Class)classForUnarchiver:(id)a0;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)allowsPasteAsSmartField;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned short)smartFieldKind;
- (id)initFromSmartField:(id)a0 href:(id)a1 hrefOriginal:(id)a2;

@end
