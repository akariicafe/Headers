@interface EBCellFormatTable : NSObject

+ (void)readWithState:(id)a0;
+ (id)getStyleNameForCellFormatIndex:(unsigned int)a0 xlStyleTable:(const struct XlStyleTable { void /* function */ **x0; struct CsSimpleHeapVector<XlRecord> { struct ChVector<XlRecord *> { struct XlRecord **x0; struct XlRecord **x1; struct __compressed_pair<XlRecord **, ChAllocator<XlRecord *> > { struct XlRecord **x0; } x2; } x0; } x1; struct OcText { void /* function */ **x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; char *x5; char *x6; BOOL x7; } x2[10]; } *)a1 edResources:(id)a2;

@end
