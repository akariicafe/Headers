@interface EBLinkTable : NSObject

+ (int)mapXlLinkTypeToED:(int)a0;
+ (int)mapEDLinkTypeToXl:(int)a0;
+ (void)readFromState:(id)a0;
+ (struct XlLinkTable { void /* function */ **x0; struct XlLinkLookupTable { void /* function */ **x0; BOOL x1; struct ChVector<XlXti *> { struct XlXti **x0; struct XlXti **x1; struct __compressed_pair<XlXti **, ChAllocator<XlXti *> > { struct XlXti **x0; } x2; } x2; } x1; struct ChVector<XlLink *> { struct XlLink **x0; struct XlLink **x1; struct __compressed_pair<XlLink **, ChAllocator<XlLink *> > { struct XlLink **x0; } x2; } x2; } *)createXlLinkTableFromLinksCollection:(id)a0 workbook:(id)a1 state:(id)a2;

@end
