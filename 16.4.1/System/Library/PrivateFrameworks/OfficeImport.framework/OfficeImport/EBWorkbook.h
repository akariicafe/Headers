@interface EBWorkbook : NSObject

+ (void)readDocumentPresentation:(id)a0 state:(id)a1;
+ (void *)createSheetNamesFromWorkbook:(id)a0;
+ (void)readDocumentProperties:(id)a0 state:(id)a1;
+ (id)readWithState:(id)a0 reader:(id)a1;
+ (void)setupProcessors:(id)a0;
+ (int)xlSheetTypeEnumFromEDSheet:(id)a0;

@end
