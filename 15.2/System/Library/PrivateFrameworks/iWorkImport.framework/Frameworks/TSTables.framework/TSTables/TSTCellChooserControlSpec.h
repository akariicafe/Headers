@class NSArray, TSTPopUpMenuModel;

@interface TSTCellChooserControlSpec : TSTCellSpec {
    NSArray *_displayChoices;
}

@property (retain, nonatomic) TSTPopUpMenuModel *popupModel;
@property (readonly, nonatomic) NSArray *displayChoicesForInspector;
@property (readonly, nonatomic) BOOL startWithFirstItem;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)popupCellSpec:(id)a0 startWithFirstItem:(BOOL)a1;
+ (id)cellSpecFromTSKFormat:(id)a0;

- (id)valueForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned int)interactionType;
- (unsigned long long)hash;
- (unsigned long long)indexForValue:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)asChooserControlSpec;
- (id)displayStringAtIndex:(unsigned long long)a0;
- (BOOL)validateFormatAndValue:(id)a0;
- (id)initWithPopupModel:(id)a0 startWithFirstItem:(BOOL)a1;
- (id)tskMultipleChoiceListFormat;

@end
