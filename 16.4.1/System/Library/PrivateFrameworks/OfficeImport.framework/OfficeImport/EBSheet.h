@interface EBSheet : NSObject

+ (Class)ebSheetClassFromEDSheet:(id)a0;
+ (Class)edSheetClassFromXlSheetTypeEnum:(int)a0;
+ (void)readDelayedSheetWithIndex:(unsigned int)a0 state:(id)a1;
+ (void)readSheetWithIndex:(unsigned int)a0 state:(id)a1;

@end
