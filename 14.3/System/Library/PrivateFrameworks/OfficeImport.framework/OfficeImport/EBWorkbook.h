@interface EBWorkbook : NSObject

+ (id)readWithState:(id)a0 reader:(id)a1;
+ (void)readDocumentProperties:(id)a0 state:(id)a1;
+ (void)readDocumentPresentation:(id)a0 state:(id)a1;
+ (struct ChVector<OcText> { struct OcText *x0; struct OcText *x1; struct __compressed_pair<OcText *, ChAllocator<OcText> > { struct OcText *x0; } x2; } *)createSheetNamesFromWorkbook:(id)a0;
+ (int)xlSheetTypeEnumFromEDSheet:(id)a0;
+ (void)setupProcessors:(id)a0;

@end
