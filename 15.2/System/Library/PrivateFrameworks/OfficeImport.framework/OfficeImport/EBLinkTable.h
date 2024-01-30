@interface EBLinkTable : NSObject

+ (int)mapXlLinkTypeToED:(int)a0;
+ (int)mapEDLinkTypeToXl:(int)a0;
+ (void)readFromState:(id)a0;
+ (void *)createXlLinkTableFromLinksCollection:(id)a0 workbook:(id)a1 state:(id)a2;

@end
