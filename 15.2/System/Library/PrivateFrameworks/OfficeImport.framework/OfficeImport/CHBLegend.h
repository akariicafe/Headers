@interface CHBLegend : NSObject

+ (id)readFrom:(void *)a0 state:(id)a1;
+ (int)chdLegendPositionEnumFromXlLegendPosition:(int)a0;
+ (id)readCHDLegendEntryFrom:(const void *)a0 state:(id)a1;
+ (int)xlLegendPositionEnumFromCHDLegendPosition:(int)a0;

@end
