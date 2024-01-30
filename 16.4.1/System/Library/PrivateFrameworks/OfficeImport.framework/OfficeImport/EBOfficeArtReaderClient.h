@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>

+ (BOOL)escherIsFullySupported;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)a0 state:(id)a1;
+ (void)readClientDataFromGroup:(id)a0 toGroup:(id)a1 state:(id)a2;
+ (void)readClientDataFromShape:(id)a0 toGraphic:(id)a1 state:(id)a2;
+ (void)readClientDataFromTableCell:(id)a0 toTableCell:(id)a1 state:(id)a2;
+ (id)readDrawableFromPackagePart:(id)a0 foundInObject:(id)a1 state:(id)a2;
+ (void)readEshClientAnchor:(const void *)a0 targetClientData:(id)a1 state:(id)a2;
+ (void)setAutoInsetForShape:(void *)a0;
+ (BOOL)tablesAreAllowed;
+ (BOOL)xmlEquivalentOfDrawableCanBeUsed;

@end
