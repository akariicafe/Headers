@class NSString, TSWPParagraphStyle, TSWPListStyle;

@interface TSWPTextStylePreset : TSPObject <TSSPreset, TSKModel>

@property (copy, nonatomic) NSString *presetIdentifier;
@property (retain, nonatomic) TSWPParagraphStyle *paragraphStyle;
@property (retain, nonatomic) TSWPListStyle *listStyle;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)referencedStyles;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithContext:(id)a0 presetIdentifier:(id)a1 paragraphStyle:(id)a2 listStyle:(id)a3;

@end
