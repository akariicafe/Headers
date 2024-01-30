@interface EBLinkTable : NSObject

+ (void *)createXlLinkTableFromLinksCollection:(id)a0 workbook:(id)a1 state:(id)a2;
+ (int)mapEDLinkTypeToXl:(int)a0;
+ (int)mapXlLinkTypeToED:(int)a0;
+ (void)readFromState:(id)a0;

@end
